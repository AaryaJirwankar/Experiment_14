//Aarya Jirwankar
//23070123161

# include <iostream>
# include <string>
using namespace std;

class uni
{
    public:
    string uni = "Symbiosis";
    void course()
    {
        cout<<"B. Tech ";
    }
};
class branch: public uni
{
    public:
    string branch = " Electronics and Telecommunication ";

};

int main()
{
    branch b1;
    cout<<b1.uni<<endl;
    b1.course();
    cout<<b1.branch;
}
