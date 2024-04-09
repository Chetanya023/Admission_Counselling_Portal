#include<iostream>
#include<cmath>
#include<string>
using namespace std;
main()
{
    int choice,number;
    string name,mail;
    int phy_marks,chem_marks,bio_marks,maths_marks,comp_marks,hindi_marks,eng_marks,phyed_marks;
    cout<<endl;
    cout<<"BUCKET_1 CONTAINS THE FOLLOWING BRANCHES:"<<endl;
    cout<<"1. Computer Science and Engineering (CSE)"<<endl;
    cout<<"2. Information Technology (IT)"<<endl;
    cout<<"3. Electronics and Communication Engineering (ECE)"<<endl;
    cout<<"4. Civil Engineering (CE)"<<endl;
    cout<<endl;
    cout<<"BUCKET_2 CONTAINS THE FOLLOWING BRANCHES:"<<endl;
    cout<<"1. Biotechnology (BT)"<<endl;
    cout<<"2. Bioinformatics (BI)"<<endl;
    cout<<endl;
    cout<<"PLEASE ENTER YOUR CHOICE OF THE BUCKET IN WHICH YOUR PREFERED ADMISSION BRANCH LIES:"<<endl;;
    cout<<"Enter 1-> Bucket_1 | 2-> Bucket_2"<<endl;
    cout<<endl;
    cin>>choice;
    if(choice==1)
    {
        cout<<endl;
        cout<<"Enter Your Name"<<endl;
        cin.ignore();
        getline(cin,name);
        
        cout<<"Enter Your Contact Number"<<endl;
        cin.ignore();
        cin>>number;
        
        cout<<"Enter Your E-Mail Address"<<endl;
        cin.ignore();
        getline(cin,mail);
        
        cout<<"Enter Physics(M_1) Marks:"<<endl;
        cin>>phy_marks;
      
        cout<<"Enter Maths(M_2) Marks:"<<endl;
        cin>>maths_marks;
       
        cout<<"Enter Chemistry(E_1) Marks:"<<endl;
        cin>>chem_marks;
       
        cout<<"Enter English(E_2) Marks:"<<endl;
        cin>>eng_marks;
       
        cout<<"Enter Computer(E_3) Marks:"<<endl;
        cin>>comp_marks;
      
        cout<<"Enter Hindi Marks(O_1) Marks:"<<endl;
        cin>>hindi_marks;
      
        cout<<"Enter Physical Education(O_2) Marks:"<<endl;
        cin>>phyed_marks;
        cout<<endl;
        int max_marks_1 = max(chem_marks,eng_marks);
        int max_marks_2 = max(max_marks_1,comp_marks);
        int total_marks = phy_marks+maths_marks+max_marks_2;
        int percentage_obtained = ((total_marks*100)/300);
        if(percentage_obtained>=70)
        {
            if(percentage_obtained>=70&&percentage_obtained<=75)
            {
            cout<<"NAME : "<<name<<endl;
            cout<<"CONTACT NO : "<<number<<endl;
            cout<<"E-MAIL : "<<mail<<endl;
            cout<<"PERCENTAGE-OBTAINED : "<<percentage_obtained<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN CSE DEPARTMENT : "<<(percentage_obtained-20)<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN IT DEPARTMENT : "<<(percentage_obtained-15)<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN ECE DEPARTMENT : "<<"100"<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN CIVIL DEPARTMENT : "<<"100"<<endl;
            cout<<endl;
            }
            else if(percentage_obtained>=76&&percentage_obtained<=80)
            {
            cout<<"NAME : "<<name<<endl;
            cout<<"CONTACT NO : "<<number<<endl;
            cout<<"E-MAIL : "<<mail<<endl;
            cout<<"PERCENTAGE-OBTAINED : "<<percentage_obtained<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN CSE DEPARTMENT : "<<(percentage_obtained-15)<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN IT DEPARTMENT : "<<(percentage_obtained-10)<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN ECE DEPARTMENT : "<<"100"<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN CIVIL DEPARTMENT : "<<"100"<<endl;
            cout<<endl;
            }
            else if(percentage_obtained>=81&&percentage_obtained<=85)
            {
            cout<<"NAME : "<<name<<endl;
            cout<<"CONTACT NO : "<<number<<endl;
            cout<<"E-MAIL : "<<mail<<endl;
            cout<<"PERCENTAGE-OBTAINED : "<<percentage_obtained<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN CSE DEPARTMENT : "<<(percentage_obtained-10)<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN IT DEPARTMENT : "<<(percentage_obtained-5)<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN ECE DEPARTMENT : "<<"100"<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN CIVIL DEPARTMENT : "<<"100"<<endl;
            cout<<endl;
            }
            else if(percentage_obtained>=86&&percentage_obtained<=90)
            {
            cout<<"NAME : "<<name<<endl;
            cout<<"CONTACT NO : "<<number<<endl;
            cout<<"E-MAIL : "<<mail<<endl;
            cout<<"PERCENTAGE-OBTAINED : "<<percentage_obtained<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN CSE DEPARTMENT : "<<(percentage_obtained-5)<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN IT DEPARTMENT : "<<"100"<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN ECE DEPARTMENT : "<<"100"<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN CIVIL DEPARTMENT : "<<"100"<<endl;
            cout<<endl;
            }
            else if(percentage_obtained>=91&&percentage_obtained<=100)
            {
            cout<<"NAME : "<<name<<endl;
            cout<<"CONTACT NO : "<<number<<endl;
            cout<<"E-MAIL : "<<mail<<endl;
            cout<<"PERCENTAGE-OBTAINED : "<<percentage_obtained<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN CSE DEPARTMENT : "<<"100"<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN IT DEPARTMENT : "<<"100"<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN ECE DEPARTMENT : "<<"100"<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN CIVIL DEPARTMENT : "<<"100"<<endl;
            cout<<endl;
            }
            else 
            {
                cout<<"INVALID INPUT"<<endl;
                cout<<endl;
            }
        }
        else 
        {
            cout<<"NAME : "<<name<<endl;
            cout<<"CONTACT NO : "<<number<<endl;
            cout<<"E-MAIL : "<<mail<<endl;
            cout<<"PERCENTAGE-OBTAINED : "<<percentage_obtained<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN CSE DEPARTMENT : "<<0<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN IT DEPARTMENT : "<<0<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN ECE DEPARTMENT : "<<0<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN CIVIL DEPARTMENT : "<<0<<endl;
            cout<<endl;
        }
    }
    else if(choice==2)
    {
        cout<<endl;
        cout<<"Enter Your Name"<<endl;
        cin.ignore();
        getline(cin,name);
        
        cout<<"Enter Your Contact Number"<<endl;
        cin.ignore();
        cin>>number;
        
        cout<<"Enter Your E-Mail Address"<<endl;
        cin.ignore();
        getline(cin,mail);
        
        cout<<"Enter Physics(M_1) Marks:"<<endl;
        cin>>phy_marks;
      
        cout<<"Enter Biology(M_2) Marks:"<<endl;
        cin>>bio_marks;
       
        cout<<"Enter Chemistry(E_1) Marks:"<<endl;
        cin>>chem_marks;
       
        cout<<"Enter Maths(E_2) Marks:"<<endl;
        cin>>maths_marks;
       
        cout<<"Enter Computer(E_3) Marks:"<<endl;
        cin>>comp_marks;
      
        cout<<"Enter Hindi Marks(O_1) Marks:"<<endl;
        cin>>hindi_marks;
      
        cout<<"Enter Physical Education(O_2) Marks:"<<endl;
        cin>>phyed_marks;
        cout<<endl;
        int max_marks_1 = max(chem_marks,maths_marks);
        int max_marks_2 = max(max_marks_1,comp_marks);
        int total_marks = phy_marks+bio_marks+max_marks_2;
        int percentage_obtained = ((total_marks*100)/300);
        if(percentage_obtained>=70)
        {
            if(percentage_obtained>=70&&percentage_obtained<=75)
            {
            cout<<"NAME : "<<name<<endl;
            cout<<"CONTACT NO : "<<number<<endl;
            cout<<"E-MAIL : "<<mail<<endl;
            cout<<"PERCENTAGE-OBTAINED : "<<percentage_obtained<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN BT DEPARTMENT : "<<(percentage_obtained-15)<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN BI DEPARTMENT : "<<(percentage_obtained-10)<<endl;
            cout<<endl;
            }
            else if(percentage_obtained>=76&&percentage_obtained<=80)
            {
            cout<<"NAME : "<<name<<endl;
            cout<<"CONTACT NO : "<<number<<endl;
            cout<<"E-MAIL : "<<mail<<endl;
            cout<<"PERCENTAGE-OBTAINED : "<<percentage_obtained<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN BT DEPARTMENT : "<<(percentage_obtained-10)<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN BI DEPARTMENT : "<<(percentage_obtained-5)<<endl;
            cout<<endl;
            }
            else if(percentage_obtained>=81&&percentage_obtained<=85)
            {
            cout<<"NAME : "<<name<<endl;
            cout<<"CONTACT NO : "<<number<<endl;
            cout<<"E-MAIL : "<<mail<<endl;
            cout<<"PERCENTAGE-OBTAINED : "<<percentage_obtained<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN BT DEPARTMENT : "<<(percentage_obtained-5)<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN BI DEPARTMENT : "<<"100"<<endl;
            cout<<endl;
            }
            else if(percentage_obtained>=86&&percentage_obtained<=100)
            {
            cout<<"NAME : "<<name<<endl;
            cout<<"CONTACT NO : "<<number<<endl;
            cout<<"E-MAIL : "<<mail<<endl;
            cout<<"PERCENTAGE-OBTAINED : "<<percentage_obtained<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN BT DEPARTMENT : "<<"100"<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN BI DEPARTMENT : "<<"100"<<endl;
            cout<<endl;
            }
            else 
            {
                cout<<"INVALID INPUT"<<endl;
                cout<<endl;
            }
        }
        else 
        {
            cout<<"NAME : "<<name<<endl;
            cout<<"CONTACT NO : "<<number<<endl;
            cout<<"E-MAIL : "<<mail<<endl;
            cout<<"PERCENTAGE-OBTAINED : "<<percentage_obtained<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN CSE DEPARTMENT : "<<0<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN IT DEPARTMENT : "<<0<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN ECE DEPARTMENT : "<<0<<endl;
            cout<<"PROBABILITY OF SECURING A SEAT IN CIVIL DEPARTMENT : "<<0<<endl;
            cout<<endl;
        }
    }
    else 
    {
        cout<<"INVALID CHOICE *** ENTER VALID CHOICE OF THE BUCKET"<<endl;
        cout<<endl;
    }
}