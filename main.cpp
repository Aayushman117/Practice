#include <iostream>
using namespace std;
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


namespace A {
    int value = 10;

}
namespace B {
    int value = 20;
}


int main() {
    cout<<A::value<<endl;
    cout<<B::value<<endl;
    return 0;
}


    // TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.