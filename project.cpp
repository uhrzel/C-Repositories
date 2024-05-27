#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QTextEdit>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

struct Process {
    int pid;
    int arrival_time;
    int burst_time;
    int waiting_time;
    int completion_time;
    int turn_around_time;
};

class FCFS_GUI : public QWidget {
    Q_OBJECT
public:
    FCFS_GUI(QWidget *parent = 0) : QWidget(parent) {
        QVBoxLayout *layout = new QVBoxLayout;
        setLayout(layout);

        QLabel *processLabel = new QLabel("Number of Processes:");
        layout->addWidget(processLabel);

        processLineEdit = new QLineEdit;
        layout->addWidget(processLineEdit);

        outputTextEdit = new QTextEdit;
        layout->addWidget(outputTextEdit);

        QPushButton *runButton = new QPushButton("Run FCFS");
        layout->addWidget(runButton);
        connect(runButton, SIGNAL(clicked()), this, SLOT(runFCFS()));
    }

private slots:
    void runFCFS() {
        int size = processLineEdit->text().toInt();
        int current_time = 0;
        double total_turnaround_time = 0;
        double total_waiting_time = 0;
        double total_burst_time = 0;

        vector<Process> proc(size);

        outputTextEdit->clear();
        outputTextEdit->append("Process\t\tArrival Time\t Burst Time\t Completion Time\t Turn Around Time\t Waiting Time");

        for (int i = 0; i < size; i++) {
            proc[i].pid = i + 1;
            proc[i].arrival_time = QInputDialog::getInt(this, tr("Arrival Time"),
                tr("P[%1] Arrival Time:").arg(i + 1), 0, 0, 100, 1);
            proc[i].burst_time = QInputDialog::getInt(this, tr("Burst Time"),
                tr("P[%1] Burst Time:").arg(i + 1), 0, 0, 100, 1);
            total_burst_time += proc[i].burst_time;
        }

        // Sorting processes based on arrival time
        for (int j = 0; j < size - 1; j++) {
            for (int i = 0; i < size - 1; i++) {
                if (proc[i].arrival_time > proc[i + 1].arrival_time) {
                    swap(proc[i], proc[i + 1]);
                }
            }
        }

        // Calculate completion time, turnaround time, and waiting time
        for (int i = 0; i < size; i++) {
            proc[i].completion_time = max(current_time, proc[i].arrival_time) + proc[i].burst_time;
            proc[i].turn_around_time = proc[i].completion_time - proc[i].arrival_time;
            proc[i].waiting_time = proc[i].turn_around_time - proc[i].burst_time;
            current_time = proc[i].completion_time;

            total_turnaround_time += proc[i].turn_around_time;
            total_waiting_time += proc[i].waiting_time;

            outputTextEdit->append(QString("P[%1]\t\t%2\t\t %3\t\t %4\t\t\t %5\t\t\t %6").arg(proc[i].pid)
                .arg(proc[i].arrival_time).arg(proc[i].burst_time).arg(proc[i].completion_time)
                .arg(proc[i].turn_around_time).arg(proc[i].waiting_time));
        }

        // Calculate averages
        double avg_turnaround_time = total_turnaround_time / size;
        double avg_waiting_time = total_waiting_time / size;
        double cpu_utilization = total_burst_time / current_time;

        outputTextEdit->append(QString("Average Turnaround Time: %1").arg(avg_turnaround_time));
        outputTextEdit->append(QString("Average Waiting Time: %1").arg(avg_waiting_time));
        outputTextEdit->append(QString("CPU Utilization: %1").arg(cpu_utilization));
    }

private:
    QLineEdit *processLineEdit;
    QTextEdit *outputTextEdit;
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    FCFS_GUI window;
    window.setWindowTitle("FCFS Scheduling Algorithm");
    window.resize(600, 400);
    window.show();

    return app.exec();
}

#include "main.moc"
