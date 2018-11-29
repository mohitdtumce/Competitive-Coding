#include <bits/stdc++.h>
using namespace std;
#define MeetingSize 5
#define EmployeeCount 10
class meeting
{
  public:
    string meetingName, organizerName;
    int startTime, endTime, attendees, organizerPriority;
    bool willAttend;

    void setData(string meetingName, int startTime, int endTime, int attendees, int organizerPriority, string organizerName)
    {
        this->meetingName = meetingName;
        this->startTime = startTime;
        this->endTime = endTime;
        this->attendees = attendees;
        this->organizerPriority = organizerPriority;
        this->organizerName = organizerName;
        this->willAttend = false;
    }
};

bool comp1(meeting a, meeting b)
{
    if (a.startTime < b.startTime)
        return true;
    else if (a.startTime > b.startTime)
        return false;
    else
    {
        return a.endTime < b.endTime;
    }
}

bool comp(meeting a, meeting b)
{
    if (a.organizerPriority < b.organizerPriority)
    {
        return true;
    }
    else if (a.organizerPriority > b.organizerPriority)
    {
        return false;
    }
    else
    {
        if (a.attendees < b.attendees)
        {
            return true;
        }
        else if (a.attendees > b.attendees)
        {
            return false;
        }
        else
        {
            return comp1(a, b);
        }
    }
}

bool checkIfFree(bool *busy, int startTime, int endTime)
{
    for (int i = startTime; i < endTime; i++)
    {
        if (busy[i])
        {
            return false;
        }
    }
    return true;
}

void markBusy(bool *busy, int startTime, int endTime)
{
    for (int i = startTime; i < endTime; i++)
    {
        busy[i] = true;
    }
}
int timeFormat12To24Convertor(string time)
{
    int res = 0;
    if (time.substr(5, 2) == "PM")
    {
        res += 1200;
    }
    res += stoi(time.substr(0, 2)) * 100 + stoi(time.substr(3, 2));
    return res;
}
string timeFormat24To12Convertor(int time)
{
    string res;
    if (time > 1200)
    {
        time -= 1200;
        res += to_string(time / 100) + ":" + to_string(time % 100) + "PM";
    }
    else
    {
        res += to_string(time / 100) + ":" + to_string(time % 100) + "AM";
    }
    return res;
}

int getEmployeePriority(string designation)
{
    if (designation == "CEO")
        return 0;
    else if (designation == "COO")
        return 1;
    else if (designation == "DIRECTOR")
        return 2;
    else if (designation == "MANAGER")
        return 3;
    else
        return -1;
}
int main()
{
    map<string, int> rank;
    string empName, empDesignation;
    for (int i = 0; i < EmployeeCount; i++)
    {
        cin >> empName >> empDesignation;
        rank.insert(make_pair(empName, getEmployeePriority(empDesignation)));
    }

    string employee = "Amit";
    string organizer, meetingName;
    int startTime, endTime, attendees, organizerPriority;
    vector<meeting> M(MeetingSize);
    rank[employee] = -1;
    for (int i = 0; i < MeetingSize; i++)
    {
        cin >> meetingName >> startTime >> endTime >> attendees >> organizer;
        M[i].setData(meetingName, startTime, endTime, attendees, rank[organizer], organizer);
    }

    // for (int i = 0; i < MeetingSize; i++) {
    //     cout<<M[i].meetingName<<" "<< M[i].startTime<<" "<<M[i].endTime<<" "<<M[i].attendees<<" "<<M[i].organizerPriority<<"\n";
    // }
    // cout<<"\n";
    sort(M.begin(), M.end(), comp);
    // for (int i = 0; i < MeetingSize; i++) {
    //     cout<<M[i].meetingName<<" "<< M[i].startTime<<" "<<M[i].endTime<<" "<<M[i].attendees<<" "<<M[i].organizerPriority<<"\n";
    // }

    int timer = 0, index = 0;
    bool busy[2401] = {};
    while (index < MeetingSize)
    {
        if (M[index].startTime >= timer)
        {
            M[index].willAttend = true;
            timer = M[index].endTime;
            markBusy(busy, M[index].startTime, M[index].endTime);
            // for (int i = M[index].startTime; i <= M[index].endTime; i++)
            //     busy[i] = true;
        }
        index++;
    }

    for (int i = 0; i < MeetingSize; i++)
    {
        if (M[i].willAttend == false && checkIfFree(busy, M[i].startTime, M[i].endTime))
        {
            M[i].willAttend = true;
            markBusy(busy, M[i].startTime, M[i].endTime);
        }
    }

    sort(M.begin(), M.end(), comp1);
    for (int i = 0; i < MeetingSize; i++)
    {
        if (M[i].willAttend)
        {
            cout << M[i].meetingName << ", " << M[i].startTime << ", " << M[i].endTime << ", " << M[i].attendees << ", " << M[i].organizerName << ", " << M[i].organizerPriority << "\n";
        }
    }
    return 0;
}