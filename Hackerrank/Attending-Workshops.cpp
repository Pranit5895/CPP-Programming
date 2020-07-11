#include<bits/stdc++.h>

using namespace std;



//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
struct Workshops
{
    int start_time = 0;
    int duration = 0;
    int end_time = 0;

    Workshops(int s, int d) :
        start_time(s), duration(d), end_time(s + d)
    {

    }
};

struct Available_Workshops
{
    vector<Workshops> arr;
};


Available_Workshops* initialize (int start_time[], int duration[], int n)
{
    Available_Workshops*    aw = new Available_Workshops();

    for (int i = 0; i < n; ++i)
    {
        aw->arr.push_back(Workshops(start_time[i], duration[i]));
    }

    return aw;
}


int CalculateMaxWorkshops(Available_Workshops *aw)
{

    std::sort(aw->arr.begin(), aw->arr.end(),
              [](const Workshops & a, const Workshops & b) -> bool
              {
                  return a.end_time < b.end_time;
              });

    int last_time=-1;
    int nb = 0;
    for (const auto& w : aw->arr) {
        if (w.start_time >= last_time) {
            last_time = w.end_time;
            nb++;
        }
    }

    return nb;
}
int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}


