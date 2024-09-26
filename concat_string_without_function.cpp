/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char fi[90],se[90];
    int flen,count=0;
    cout<<"enter first val";
    cin.getline(fi,90);
    cout<<"enter second val";
    cin.getline(se,90);
    cout<<"before concat val"<<fi;
    flen=strlen(fi);
    if(se[count]!='\0'){
        fi[flen]=se[count];
        flen++;
        count++;
    }
    fi[flen]='\0';
    cout<<"after concat val";
}*/
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char fi[90], se[90];
    int flen, count = 0;

    cout << "Enter first string: ";
    cin.getline(fi, 90);

    cout << "Enter second string: ";
    cin.getline(se, 90);

    cout << "Before concatenation: " << fi << endl;

    // Get the length of the first string
    flen = strlen(fi);

    // Manually concatenate the second string
    while(se[count] != '\0') {
        fi[flen] = se[count];
        flen++;
        count++;
    }

    // Add null terminator at the end of the concatenated string
    fi[flen] = '\0';

    cout << "After concatenation: " << fi << endl;

    return 0;
}
