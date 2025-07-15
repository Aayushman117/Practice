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


struct subject {
    int marks;
};
int main() {
    subject s1, s2, s3, s4;
    cout << "Enter details of 1st subject: ";
    cin >> s1.marks;
    cout << "Enter details of 2nd subject: ";
    cin >> s2.marks;
    cout << "Enter details of 3rd subject: ";
    cin >> s3.marks;
    cout << "Enter details of 4th subject: ";
    cin >> s4.marks;
    int tm = s1.marks + s2.marks + s3.marks + s4.marks;  // ✅ correct summing of marks
    float avg = tm / 4.0;
    cout << "Total Marks: " << tm << endl;
    cout << "Average Marks: " << avg << endl;
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