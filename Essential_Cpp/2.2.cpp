#include <iostream>
#include <string>
#include <vector>
using namespace std;


bool calc_elements(vector<int> &vec, int pos);
void display(vector<int> &vec, const string &title, ostream &os=cout);


int main()
{
    vector<int> pent;
    const string title("Pentagonal Numeric Series" );
    if(calc_elements(pent, 0))
        display(pent, title);
    if(calc_elements(pent, 8))
        display(pent, title);
    if(calc_elements(pent, 14))
        display(pent, title);
    if(calc_elements(pent, 138))
        display(pent, title);
    return 0;
}

bool calc_elements(vector<int> &vec, int pos)
{
    if(pos <= 0 || pos > 64)
    {
        cout << "Sorry, invaild pos " << pos << endl;
        return false;
    }

    for(int ix=vec.size()+1; ix<=pos; ++ix) # 这个ix=vec.size()+1再理解下。
    {
        vec.push_back(ix*(3*ix-1)/2);
    }
    return true;
}

void display(vector<int> &vec, const string &title, ostream &os)
{
    cout << '\n' << title << "\n\t";
    for(int ix=0; ix < vec.size(); ++ix)
        os << vec[ix] << ' ';
    os << endl;
}
