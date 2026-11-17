//practical 7.2
#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main()
{
    char pr[100],newpr[50],search_word[30],word[30],copy_pr[150];
    int i=0,sum=0,count=0,count_schar=0,pr_length=0,upadatepr_length=0;
    int last_space=-1,word_length=0;
    bool found=false,isPalindrome=true;
    char upadate_pr[150],upper_pr[150],lower_pr[150];

    cout<<"************************************************\n";
    cout<<"DOCUMENT TEXT ANALYZER\n";
    cout<<"************************************************\n";
    cout<<"Enter paragraph:";
    cin.getline(pr,sizeof(pr));
    //PART-A_________________
    cout<<"---------------------------------------------------"<<endl;
    cout<<"TEXT ANALYSIS\n";
    cout<<"---------------------------------------------------"<<endl;
    //Find characters
    for( i=1; pr[i]!='\0'; i++)
    {

    }
    cout<<left<<setw(15)<<"Characters"<<":"<<i<<endl;

    //find words
    for(int i=0; pr[i]!='\0'; i++)
    {
        if(pr[i] == ' ')
        {
            sum++;

        }

    }
    cout<<left<<setw(15)<<"Words"<<":"<<sum+1<<endl;

    //find alphabets
    cout<<left<<setw(15)<<"Alphabets"<<":"<<i-(sum+1)<<endl;

    //find digits
    for(int i=0; pr[i]!='\0'; i++)
    {
        if(pr[i]>='0' &&  pr[i]<='9')
        {

            count++;

        }

    }

    cout<<left<<setw(15)<<"Digits"<<":"<<count<<endl;

    //find special char
    for(int i=0; pr[i]!='\0'; i++){
        if(pr[i]=='.'|| pr[i]==',' || pr[i]=='*' || pr[i]=='!' || pr[i]=='?'){
            count_schar++;
        }
    }
    cout<<left<<setw(15)<<"Special Characters"<<":"<<count_schar<<endl;

    //PART-B_________________
    cout<<"---------------------------------------------------"<<endl;
    cout<<"STRING EXTRACTION\n";
    cout<<"---------------------------------------------------"<<endl;
    //first word
    cout<<"First Word:\n";
    for(int i=0;pr[i]!=' ';i++){
        cout<<pr[i];
    }
    cout<<endl;

    //last word
    cout<<"Last Word:\n";

    for(int i=0;pr[i]!='\0';i++){
        if(pr[i] == ' '){
            last_space=i;
        }
    }
    for(int i=last_space+1;pr[i]!='\0';i++){
        cout<<pr[i];
    }
    cout<<endl;

    //first char
    cout<<"First Character:\n";
    for(int i=0;i<1;i++){
        cout<<pr[i];
    }
    cout<<endl;

    //last char
    for(int i=0;pr[i]!='\0';i++){
        pr_length++;
    }

    cout<<"Last Character:\n";
    for(int i=pr_length-1;i<=pr_length;i++){
        cout<<pr[i];
    }
    cout<<endl;

    //PART-C_________________
    cout<<"---------------------------------------------------"<<endl;
    cout<<"CONCATENATION\n";
    cout<<"---------------------------------------------------"<<endl;

    cout<<"Enter Additional Sentence:";
    cin.getline(newpr,sizeof(newpr));
    cout<<"Updated paragraph:";
    strcpy(upadate_pr,pr);
    strcat(upadate_pr," ");
    strcat(upadate_pr,newpr);
    //upadate_pr[i]='\0';
    cout<<upadate_pr;
    cout<<endl;

    //PART-D_________________
    cout<<"---------------------------------------------------"<<endl;
    cout<<"PATTERN MATCHING\n";
    cout<<"---------------------------------------------------"<<endl;
    cout<<"Enter Search Word:";
    cin.getline(search_word,sizeof(search_word));
    for(int i=0;upadate_pr[i]!='\0';i++){
        if(strstr(upadate_pr,search_word) != NULL){
            found=true;

        }
    }
    if(found){
        cout<<"KeyWord Found\n";

    }
    else{
        cout<<"KeyWord Not Found\n";
    }

     //PART-E_________________
    cout<<"---------------------------------------------------"<<endl;
    cout<<"STRING TRANSFORMATION\n";
    cout<<"---------------------------------------------------"<<endl;
    //uppercase
    cout<<"Uppercase:";
    for(int i=0;upadate_pr[i]!='\0';i++){
        if(upadate_pr[i]>='a' && upadate_pr[i]<='z'){
            upadate_pr[i]-=32;
        }
    }
    cout<<strcpy(upper_pr,upadate_pr)<<endl;
    cout<<"---------------------------------------------------"<<endl;


    //lowercase
    cout<<"Lowercase:";
    for(int i=0;upadate_pr[i]!='\0';i++){
        if(upadate_pr[i]>='A' && upadate_pr[i]<='Z'){
            upadate_pr[i]+=32;
        }
    }
    cout<<strcpy(lower_pr,upadate_pr)<<endl;
    cout<<"---------------------------------------------------"<<endl;


    //reverse
    for(int i=0;upadate_pr[i]!='\0';i++){
        upadatepr_length++;
    }

    for(int i=upadatepr_length-1;upadate_pr[i]>=0;i--){
        cout<<upadate_pr[i];
    }
    cout<<endl;
    cout<<"---------------------------------------------------"<<endl;

    //palindrome
    cout<<"Palindrome Check\n";
    cout<<"Enter Word:";
    cin>>word;
     for(int i=0;word[i]!='\0';i++){
        word_length++;
    }
    for(int i=0,j=word_length-1;i<j;i++,j--){
        if(word[i]!=word[j]){
           isPalindrome=false;
           break;
        }

    }
    if(isPalindrome){
         cout<<"Result: Palindrome"<<endl;
    }
    else{
        cout<<"Result: Not Palindrome"<<endl;

    }

     //PART-F_________________
    cout<<"---------------------------------------------------"<<endl;
    cout<<"STANDARD STRING FUNCTIONS\n";
    cout<<"---------------------------------------------------"<<endl;
    //1.
    cout<<"Length:"<<strlen(upadate_pr)<<endl;
    strcpy(copy_pr,upadate_pr);
    cout<<"String Copied Successfully\n";
    //2.
    if(strcmp(pr,newpr)==0){
        cout<<"Comparison Result: Equal\n";
    }
    else{
         cout<<"Comparison Result: Not Equal\n";
    }
    //3.
    cout<<"Concatenation: Successful\n";
    //4.
    if(strstr(pr,newpr)!=NULL){
        cout<<"Substring Search: Found\n";
    }
    else{
        cout<<"Substring Search: Not Found\n";
    }
    //5.
    for(int i=0;upadate_pr[i]!='\0';i++){
        upadate_pr[i]=toupper(upadate_pr[i]);
    }
    cout<<"toupper():  Successful\n";
    //6.
     for(int i=0;upadate_pr[i]!='\0';i++){
        upadate_pr[i]=tolower(upadate_pr[i]);
    }
    cout<<"tolower():  Successful\n";
    cout<<"---------------------------------------------------"<<endl;



    return 0;
}

