#include <iostream>
using namespace std;
#include <string>
// int main() {
//     int n = 6;
//     int i,j;
//     for (i=0;i<n;i++ ) {
//         for (j=0;j<=i;j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// *
// **
// ***
// ****
// *****
// ******



// int main() {
//     int n = 6;
//     int i,j;
//     for (i=1;i<=n;i++ ) {
//         for (j=1;j<n-i+1;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//
// struct subject {
//     int marks;
// };
// int main() {
//     subject s1, s2, s3, s4;
//     cout << "Enter details of 1st subject: ";
//     cin >> s1.marks;
//     cout << "Enter details of 2nd subject: ";
//     cin >> s2.marks;
//     cout << "Enter details of 3rd subject: ";
//     cin >> s3.marks;
//     cout << "Enter details of 4th subject: ";
//     cin >> s4.marks;
//     int tm = s1.marks + s2.marks + s3.marks + s4.marks;  // ✅ correct summing of marks
//     float avg = tm / 4.0;
//     cout << "Total Marks: " << tm << endl;
//     cout << "Average Marks: " << avg << endl;
//     return 0;
// }



// struct Student {
//     int marks[4];   // Marks in 4 subjects
//     int total;
//     float average;
//     char grade;
// };
// char calculateGrade(float avg) {
//     if (avg >= 90) return 'A';
//     else if (avg >= 75) return 'B';
//     else if (avg >= 60) return 'C';
//     else if (avg >= 40) return 'D';
//     else return 'F';
// }
// int main() {
//     Student s[3];  // For 3 students
//     for (int i = 0; i < 3; i++) {
//         cout << "Enter marks for 4 subjects of Student " << i + 1 << ":\n";
//         s[i].total = 0;
//         for (int j = 0; j < 4; j++) {
//             cout << "Subject " << j + 1 << ": ";
//             cin >> s[i].marks[j];
//             s[i].total += s[i].marks[j];
//         }
//         s[i].average = s[i].total / 4.0;
//         s[i].grade = calculateGrade(s[i].average);
//     }
//     cout<<endl;
//     for (int i = 0; i < 3; i++) {
//         cout << "Student " << i + 1 << ":\n";
//         cout << "Total Marks = " << s[i].total << endl;
//         cout << "Average = " << s[i].average << endl;
//         cout << "Grade = " << s[i].grade << endl << endl;
//     }
//      return 0;
// }





// struct Student {
//     int marks[4];   // Marks in 4 subjects
//     int total;
//     float average;
//     char grade;
// };
// char calculateGrade(float avg) {
//     if (avg >= 90) return 'A';
//     else if (avg >= 75) return 'B';
//     else if (avg >= 60) return 'C';
//     else if (avg >= 40) return 'D';
//     else return 'F';
// }
// int main() {
//     Student s[3];  // For 3 students
//     for (int i = 0; i < 3; i++) {
//         cout << "Enter marks for 4 subjects of Student " << i + 1 << ":\n";
//         s[i].total = 0;
//         for (int j = 0; j < 4; j++) {
//             cout << "Subject " << j + 1 << ": ";
//             cin >> s[i].marks[j];
//             s[i].total += s[i].marks[j];
//         }
//         s[i].average = s[i].total / 4.0;
//         s[i].grade = calculateGrade(s[i].average);
//     }
//     cout<<endl;
//     for (int i = 0; i < 3; i++) {
//         cout << "Student " << i + 1 << ":\n";
//         cout << "Total Marks = " << s[i].total << endl;
//         cout << "Average = " << s[i].average << endl;
//         cout << "Grade = " << s[i].grade << endl << endl;
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;
// class Box {
// public:
//     int length;
//     int width;
//     int area() {
//         return length * width;
//     }
// };
//
// int main() {
//     Box b1;
//     b1.length = 5;
//     b1.width =3;
//     cout<<"Area:"<<b1.area()<<endl;
//     return 0;
// }

//
//
// namespace info {
//     string name ="C++";
// }
//
// int main() {
//     using namespace info;
//     cout<<name<<endl;
//     return 0;
//
//
//
// class Outer {
// public:
//     class Inner {
//     public:
//         void show(){
//         cout<<"Inner class";
//         }
//     };
// };
//
// int main() {
//     Outer::Inner obj;
//     obj.show();
//     return 0;
// }



// class Demo {
// public:
//     Demo() {
//         cout<<"Constructor called"<<endl;
//     }
//
// };
//
// int main() {
//     Demo obj;
//
//     return 0;
// }
//


// #include <iostream>
// #include <string>
// using namespace std;

//
// struct Employee {
//     int id;
//     string name;
//     string designation;
//     float salary;
//     float da;
//     float hra;
//     float gross;
// };
//
//
// void inputEmployee(Employee &emp) {
//     cout << "Enter Employee ID: ";
//     cin >> emp.id;
//     cin.ignore();
//
//     cout << "Enter Name: ";
//     getline(cin, emp.name);
//
//     cout << "Enter Designation: ";
//     getline(cin, emp.designation);
//
//     cout << "Enter Basic Salary: ";
//     cin >> emp.salary;
//
//     cout << "Enter DA: ";
//     cin >> emp.da;
//
//     cout << "Enter HRA: ";
//     cin >> emp.hra;
//
//
//     emp.gross = emp.salary + emp.da + emp.hra;
// }
//
//
// void displayEmployee(const Employee &emp) {
//     cout << "ID\t   " << "Name  \t  " << "Designation  \t  " <<"Basic Salary  \t " <<"DA  \t  " <<"HRA  \t  "<<"Gross Salary \t   "<< endl;
//     cout<<emp.id<<" \t  "<<emp.name<<"\t   "<<emp.designation<<"\t   "<<emp.salary<<"\t   "<<emp.da<<"\t   "<<emp.hra<<"\t   "<<emp.gross<<"\t   "<<endl;
//
// }
//
// int main() {
//     Employee emp;
//
//     inputEmployee(emp);
//     displayEmployee(emp);
//
//     return 0;
// }




// int main() {
//     int len,breadth;
//     cout<<"Enter length and breath respective: ";
//     cin>>len>>breadth;
//     cout<<"Area: "<<len*breadth<<endl;
//     cout<<"Perimeter: "<<2*(len+breadth);
// }


//inheritance

// class Animal {
// public:
//     void sound() {
//         cout<<"Animal Makes sound.\n";
//     }
// };
// class Dog: public Animal {
// public:
//     void bark() {
//         cout<<"Dog barks.\n";
//     }
// };
// int main() {
//     Dog coco;
//     coco.bark();
//     coco.sound();
// }




class person {
public:
    void display() {
        cout<<"Im a person\n";
    }
};
class student: public person {
public:
    void show() {
        cout<<"Im a Student\n";
    }
};
int main() {
    student coco;
    coco.display();
    coco.show();
}



















// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.