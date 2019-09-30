#include "std_lib_facilities.h"

const vector<string> units {"m", "cm", "in", "ft"};

const double cm_to_m = 0.01;
const double in_to_m = 2.54 * cm_to_m;
const double ft_to_m = 12.0 * in_to_m;


void write()
{
    cout << "Type an amount followed by an unit. Valid units: \n";
    cout << "\tm for meters\n" << "\tcm for centimeters\n" << "\tin for inches\n" << "\tft for feet\n";
}


bool legitimacy_check(string unit)
{
    bool legal = false;
    for(string valid_unit: units)
    {
        if(valid_unit == unit)
            legal = true;   
    }
    return legal;
}


double conversion(double amount, string un)
{
    double m = 0.0;
    if(un == "ft")
        m = amount * ft_to_m;
    else if(un == "in")
        m = amount * in_to_m;
    else if(un == "cm")
        m = amount * cm_to_m;
    else
        m = amount;
    
    return m;
}


int main()
{
    write();
    double a, m = 0.0;
    double smallest, largest, summary = 0.0;
    int i;
    vector<double> values;
    string unit = "";
    while(cin >> a >> unit)
    {
        if(legitimacy_check(unit))
        {
            m = conversion(a, unit);
            if(i == 0)
            {
                cout << a << unit << " --> " << m << "m" << " is the first, the smallest and largest so far\n";
                smallest = m;
                largest = m;
            }
            else if(m < smallest)
            {
                cout << a << unit << " -->" << " the smallest so far\n";
                smallest = m;
            }
            else if(m > largest)
            {
                cout << a << unit << " -->" << " the largest so far\n";
                largest = m;
            }
            ++i;
            summary += m;
            values.push_back(m);
        }
        else
        {
            cout << unit << " is an invalid unit!\n\n";
            write();
        }
    }
    cout << "Smallest: " << smallest << " m\n";
    cout << "Largest: " << largest << " m\n";
    cout << "Amount: " << i << '\n';
    cout << "Summary: " << summary << " m\n";
    cout << "Sorted list: " << '\n';
    sort(values);
    for(double value: values)
    {
        cout << value << " m\n";
    }
    return 0;
}
