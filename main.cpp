/*

Made with Hands.
Project Name : Learning Management System
8 Dec, 2025.

Presenters : AHMAD MAQSOOD(2024-ag-8790)  &&  MOIZ AFTAB(2024-ag-9203)  &&  AHMED ILYAS(2024-ag-8958)

Students' Recovery Keys : 2024ag8790 , 2024ag9203 , 2024ag8958

To access admin account, enter this info on the very first interface :-
Admin's AG#(For Login) : 2021ag2248
Admin's Password(For Login) : CS-409-OOP
Admin's Forgot Password Function Access AG# : 2021ag2248FP
Admin's Forgot Password Recovery Key(s) :  iLoveE1, ilovee1, ILoveE1, ILOVEE1

*/

#include<iostream>
#include<vector>      //For vectors
#include<cstdlib>    //For Clear Screen  >> system("cls");
#include<random>
using namespace std;

// Confirm Function

bool confirmReturn() {

    string inConfirm;
    cout << "Press Y to Return : ";
    cin >> inConfirm;

    if(inConfirm == "Y" || inConfirm == "y"){

        return true;
    }
    else{

        cout<<"Invalid Choice."<<endl;
        return false;
    }
}

class LMS{ //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<LMS CLASS>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    
    private:
    string strDig[10] = {"0","1","2","3","4","5","6","7","8","9"};

    protected:
    //VECTORS=======================================
    vector<string> existingStds = {"SAIRA MATLOOB", "ABDUL MOIZ AFTAB", "SALIHA ASHIQ", "MUHAMMAD ADEEL HASSAN", "EMAN FATIMA", "MUHAMMAD HAROON", "MUHAMMAD AHMAD", "AMEER HAMZA", "AMNA JAVID BHATTI", "MUHAMMAD HAMZA SHABBIR", "FURQAN SHABBIR", "MUHAMMAD TAIMOOR KHAN", "MUHAMMAD WAQAR", "MOEEZ UR REHMAN", "MUHAMMAD UZAIR", "MUHAMMAD ABDULLAH", "MARIAM ARSHAD", "SAMEEN AHSAN", "IRA NADEEM", "RUBAB NADEEM", "MARIAM TEHSEEN", "DANIA MEHMOOD", "HAMNA ANEES", "ZARAKSHAN", "MALEEHA MUNAWAR", "PAWAN BATOOL", "AYESHA RAZA", "MUHAMMAD ABDULLAH KHAN", "KASHAF ZAHRA", "AHMAD MAQSOOD", "HAFIZ MUHAMMAD ABDULLAH", "INAAM MUSTAFA", "KASHAF ANWAR", "MUHAMMAD ABDULLAH", "MUHAMMAD ZOHAIB", "SHEHZAD HASSAN", "ZAINAB SHAHZAD", "AHMED ILYAS", "MEER MUHAMMAD MANSHA", "HAFIZ MUHAMMAD FAIZAN", "ESHA IRFAN", "MUHAMMAD HASHIR RAHEEM"};
    vector<string> existingAgNums = {"2024ag4879", "2024ag9203", "2024ag5154", "2024ag8341", "2024ag6916", "2024ag7600", "2024ag7870", "2024ag7872", "2024ag7874", "2024ag7876", "2024ag8001", "2024ag8008", "2024ag8010", "2024ag8015", "2024ag8024", "2024ag8027", "2024ag8030", "2024ag8035", "2024ag8110", "2024ag8112", "2024ag8317", "2024ag8327", "2024ag8332", "2024ag8337", "2024ag8339", "2024ag8348", "2024ag8549", "2024ag8550", "2024ag8689", "2024ag8790", "2024ag8797", "2024ag8803", "2024ag8808", "2024ag8834", "2024ag8881", "2024ag8901", "2024ag8953", "2024ag8958", "2024ag9097", "2024ag9173", "2024ag9179", "2023ag10405"};
    vector<string> existingCnics = {"3310522123960", "3310227623257", "3310418310596", "3310430943049", "3310049344056", "3310259541743", "3310266053537", "3320261982501", "3550301529494", "3330380168351", "3650182151749", "3330117819833", "3550105779255", "3310215035167", "3330339077055", "3310222936931", "3310207539374", "3310566097828", "3310313070462", "3310507228358", "3310233383602", "3550302375638", "3310064094506", "3310097607578", "3310276102922", "3320258923340", "3320268273360", "3550301965405", "3320399676126", "3650124060861", "3310275627507", "3320506555418", "3310576573824", "3310290611153", "3310024510169", "3310386553901", "4210118319134", "4250150922185", "3540450852005", "3310049530201", "3310208755898", "3310009613441"};
    vector<string> existingPasswords = {"10001", "10002", "10003", "10004", "10005", "10006", "10007", "10008", "10009", "10010","10011", "10012", "10013", "10014", "10015", "10016", "10017","10018", "10019", "10020","10021", "10022", "10023", "10024", "10025", "10026", "10027", "10028", "10029", "10030","10031", "10032", "10033", "10034","10035", "10036", "10037", "10038", "10039", "10040","10041", "10042"};
    vector<string> studentCGPAs = {"3.02",     "3.33",     "2.65",     "3.19",     "2.9","3.07",     "2.9",     "3.38",     "2.88",     "3.14",  "2.88",     "3.08",     "2.63",     "2.91",     "3.14", "2.9",     "3.24",     "2.64",     "2.89",     "2.87", "3.0",     "2.7",     "3.15",     "3.21",     "3.51", "3.22",     "3.31",     "3.13",     "2.74",     "3.44", "2.04",     "2.97",     "3.2",     "2.87",     "2.62",  "2.91",     "3.64",     "2.9",     "2.21",     "2.9",  "2.6",     "2.2"};
    vector<string> studentGPAs = {"2.6",    "3.28",     "2.15",     "2.82",     "2.56", "2.83",     "2.71",     "3.18",     "2.31",     "2.96",  "2.38",     "2.88",     "2.34",     "2.93",     "2.9",  "2.73",     "3.28",     "2.15",     "2.53",     "2.53",  "2.73",     "1.6",     "3.08",     "2.96",     "3.23",  "3.06",     "3.35",     "2.98",     "2.68",     "3.21",  "1.77",     "2.73",     "2.88",     "2.71",     "2.56",  "2.86",     "3.58",     "2.36",     "1.79",     "2.42",  "2.61",     "2.24"};
    vector<string> stdReviews = {
        "He explain concepts, like they make so much more sense. I honestly wish I had a teacher like him in my 1st semester, it would've made my foundation so much stronger. Just one request: right now the pace feels a little fast for me and I want to absorb everything properly.",
        "good",
        "Good Teacher",
        "So so hai",
        "Sir g love u ho gya",
        "Sir taught us exceptionally well, especially by focusing on practical work that strengthened our concepts. His teaching style is clear, engaging, and very supportive. We learned a lot in his class.",
        "In the very first class, I realized that this semester is going to be great. And it has been great so far. I wish we find more teachers like Sir Saeed, again.",
        "My Best teacher so far in 3 semesters, focus on practical work with theory and always encourage us to be competent. Teach us like our big brother and always make us feel comfortable in class, feeks like studying with our friend.",
        "Sir Saeed and oop are made for each other in my eyes. The way he explains the concepts and teaching us practically we really enjoy that. I hope we get more teachers like him in next semester.",
        "Sir G Love You Hogeya, iss agay alfaz nahi hai.",
        "Sir Syeed is a very good sir",
        "Thank you sir for foresting a passion for coding you taught us how to enjoy the complexity rather than a fear it. you are more than a teacher; you are a mentor who clearly charts the path from theroretical knowledge to industry readness. apki guidance buht qeemti h sir. Thanks sir again",
        "Sir Saeed is a good teacher and give important information about topics"
    };
    vector<string> concerningFiguresNames = {"HAROON PRODUCTIONS", "FURQAN HIZRU", "UZAIR NONCHALANT", "FAIZAN DHILLON", "AHMAD BOSS"};
    vector<string> concerningFigAgNums = {"2024ag7600", "2024ag8001", "2024ag8024", "2024ag9173", "2024ag7870"};
    //Students' Variables
    string stdName, stdPassword, stdAgNum, stdCNIC;             
    //Admin Variables
    string adminName, adminPass, adminCnic, adminAgNum;
    
    public:
    //-------------Random Index Generator-------------
    int randomIndex(){

        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<int> randomINDEX(0,9);
       
        return randomINDEX(gen);   //Generates 0-9 ints.

        // return rand()%10;   //Generates 0-9 ints.
    }

    // -------------New Account Function -------------

    void newAccount(){

        string welUser,welCnic, welPass, welAgNum;
        
        retryNA:
        
        cout<<"----------Create a New Account----------"<<endl;
        
        cout<<"Enter your Name : ";
        getline(cin, welUser);
        
        cout<<"Enter your CNIC# (Without Dashes): ";
        getline(cin, welCnic);
        
        cout<<"--------------------"<<endl;
        
        if(welUser == "" || welCnic == ""){

            system("cls");
            cout<<"Name and CNIC# are necessary. Try Again."<<endl;
            goto retryNA;
        }
        else if(welCnic.length() != 13){
            
            system("cls");
            cout<<"CNIC# must be of 13 digits. Try Again"<<endl;
            goto retryNA;
        }

        if( ((welCnic > "a" && welCnic < "z") || (welCnic > "A" && welCnic < "Z" ) ) || (welUser > "0" && welUser < "9") ){  
            
            system("cls");
            cout<<"Invalid Input Format"<<endl;
            goto retryNA;
        }

        for(int i=0; i<= existingStds.size()-1; i++ ){

            if(welCnic == existingCnics[i]){

                system("cls");
                cout<<"A User by this CNIC# already exists."<<endl;
                goto accExists;  //At the end of this function
            }
        }
        
        
        welAgNum = "2024ag";  //So that the account number starts with "2024ag"
        for(int i=0; i<=4; i++){  //Random AG no.
            
            welAgNum += strDig[randomIndex()];
        }
        
        for(int i=0; i<=4; i++){  //Random Password
    
            welPass += strDig[randomIndex()];
        }
        
        existingStds.push_back(welUser);
        existingCnics.push_back(welCnic);
        existingAgNums.push_back(welAgNum);
        existingPasswords.push_back(welPass);
        
        studentGPAs.push_back("NO DATA AVAILABLE YET");
        studentCGPAs.push_back("NO DATA AVAILABLE YET");
        
        system("cls");

        cout<<"--------------------"<<endl;
        cout<<"Your account has been Created Successfully and your Data has been Updated."<<endl;
        cout<<"--------------------"<<endl;
        cout<<"Your Name is : "<<welUser<<endl;
        cout<<"Your CNIC# is : "<<welCnic<<endl;
        cout<<"Your New Ag Number is : "<<welAgNum<<endl;
        cout<<"Your New Password is : "<<welPass<<endl;

        accExists:
        cout<<"--------------------"<<endl;
        cout<<"You are being redirected to the Previous Page."<<endl;
        cout<<"--------------------"<<endl;
    }
    
    //-------------Existing Account(s) Function-------------

    bool existingAccount(){
        
        string inUser, inPass;
        bool loginSucess = false;
        int loginAttempts = 0; //To count wrong login attempts
        
        retryEA:
        cout<<"----------Login----------"<<endl;
        
        cout<<"Username (AG#/CNIC#) : ";
        getline(cin, inUser);
        
        cout<<"Enter your Password : ";
        getline(cin, inPass);

        if(inUser == "" || inPass == ""){

            cout<<"Username and Password are necessary. Try Again."<<endl;
            goto retryEA;
        }
    
        for(int i=0; i <= existingStds.size() - 1 ; i++){  // -1 >> Because indexes start from 0

            if( (inUser == existingAgNums[i] && inPass == existingPasswords[i]) || (inUser == existingCnics[i] && inPass == existingPasswords[i]) ){

                stdName = existingStds[i];
                stdAgNum = existingAgNums[i];
                stdCNIC = existingCnics[i];
                stdPassword = existingPasswords[i];
                loginSucess = true;
                cout<<"Login Sucessful!"<<endl;
                return true;
                cout<<"--------------------"<<endl;
            }
        }
    
        if(!loginSucess){   //Counts the login attempts and gives the option to reset password or try again

            cout<<"Invalid Credentials. Try Again."<<endl;
            loginAttempts++;

            if(loginAttempts >= 3){  

                retryLFC:
                string loginFailChoice;
                cout<<"--------------------"<<endl;
                cout<<"Maximum Login Attempts Reached. Please Select an Option :-"<<endl;
                cout<<"1. Reset Password"<<endl;
                cout<<"2. Go Back to the Previous Page."<<endl;
                cout<<"Input(1-2) : ";
                cin>>loginFailChoice;
                cout<<"--------------------"<<endl;
            
                if(loginFailChoice == "1"){

                    retryLFC1:
                    system("cls");
                    cout<<"----------Forgot Password-----------"<<endl;
                    bool validAgNum = false;
                    
                    string agNumFP,recoveryKey;
                    cout<<"Enter your AG# : ";
                    cin>>agNumFP;
                    
                    for(int i=0; i <= existingStds.size() - 1; i++){
                        
                        if(agNumFP == existingAgNums[i]){
                            
                            validAgNum = true;
                        }
                    }
                    
                    if(!validAgNum){
                        
                        cout<<"Invalid AG#. Please Enter a Valid AG#."<<endl;
                        goto retryLFC1;
                    }
                    
                    cout<<"Enter the Recovery Key : ";
                    cin>>recoveryKey;
                    cout<<"--------------------"<<endl;
                    
                    if(recoveryKey == "2024ag8790" || recoveryKey == "2024ag9203"  || recoveryKey == "2024ag8958"){
                        
                        retryNewP:
                        string newPass;
                        cout<<"Enter New Password(Without Blank Spaces) : ";
                        cin>>newPass;
                        
                        if(newPass.length() < 5){
                            
                            cout<<"Password length must be of at least 5 Digits."<<endl;
                            goto retryNewP;
                        }
                        
                        for(int i=0; i <= existingStds.size() - 1; i++){
                            
                            if(agNumFP == existingAgNums[i]){

                                existingPasswords[i] = newPass;
                            }
                        }
                        cout<<"Password Changed Succesfully."<<endl;
                        return false;
                    }
                    else{
                    
                        cout<<"Invalid Recovery Key."<<endl;
                        return false;
                    }
                }
                else if(loginFailChoice == "2"){
                
                    system("cls");
                    return false;
                }   
                else{
                
                    cout<<"Invalid Input. Try Again"<<endl;
                    goto retryLFC;
                    cout<<"--------------------"<<endl;
                }
            }
            else{
   
                goto retryEA;
            }
        }

    }

};

class adminPortal : public LMS{  //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<ADMIN PORTAL CLASS>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>.
    
    public:

    adminPortal(){

        adminName = "Saeed Rasheed";
        adminPass = "CS-409-OOP";
        adminCnic = "xxxxxxxxxxxxx";
        adminAgNum = "2021ag2248";
    }
    
    //-------------Admin Account Login Function-------------

    bool adminAccLogin(string adminAccLogPara){
        
        if(adminAccLogPara == adminPass){
            
            return true;
        }
        else{

            return false;
        }
    }

    //-------------admin Portal Menu Function-------------
    
    void adminPortalMenu(){

        cout<<"-------------Admin Portal-------------"<<endl;
        cout<<"Hey "<<adminName<<"!. Welcome to your Admin Portal."<<endl;
        
        cout<<"Please Select an option to proceed :- "<<endl;
        cout<<"1. See Your Profile Info. "<<endl;
        cout<<"2. View Students' Info."<<endl;
        cout<<"3. View Students' Reviews"<<endl;
        cout<<"4. Edit your Info."<<endl;
        cout<<"5. Edit Student's Info."<<endl;
        cout<<"6. Login to Another Account."<<endl;
        cout<<"7. Students we are concerned about."<<endl;
        cout<<"8. Exit. "<<endl;
        cout<<"--------------------"<<endl;
    }
    
    //-------------admin Info Function-------------
    
    void adminInfo(){
        
        cout<<"----------Admin Info----------"<<endl;
        cout<<"Welcome to your Admin Portal."<<endl;
        cout<<"Hey "<<adminName<<"!"<<endl;
        cout<<"Your AG# is : "<<adminAgNum<<endl;
        cout<<"Your CNIC# is : "<<adminCnic<<endl;
        cout<<"The course you are teaching is : CS-409"<<endl;
        cout<<"Your Password is : *****"<<endl;
        cout<<"--------------------"<<endl;
        
        retryAI:
        string choiceAI;
        cout<<"Press R to Reveal your Password. N to Continue."<<endl;
        cout<<"Input : ";
        cin>>choiceAI;
        
        if(choiceAI == "R" || choiceAI == "r"){
            
            cout<<"Your Password is : "<<adminPass<<endl;
            
            cout<<"--------------------"<<endl;
            cout<<"You are being redirected to the Menu."<<endl;
            cout<<"--------------------"<<endl;
        }
        else if(choiceAI == "N" || choiceAI == "n"){
            
            cout<<"--------------------"<<endl;
            cout<<"You are being redirected to the Menu."<<endl;
            cout<<"--------------------"<<endl;
        }
        else{
            cout<<"Invalid Input. Try Again."<<endl;
            goto retryAI;
        }
    }
    
    //-------------admin's Students' Info Function-------------
    
    void adminStudentsInfo(){
        
        retryASI:
        cout<<"----------View Students' Info----------"<<endl;
        string choiceASI;
        cout<<"Please Select an Option :- "<<endl;
        cout<<"1. See All Students' Info."<<endl;
        cout<<"2. See a Specific Student's Info."<<endl;
        cout<<"3. Go back to the Menu"<<endl;
        
        cout<<"Input : ";
        cin>>choiceASI;
        cout<<"--------------------"<<endl;
        
        if(choiceASI == "1"){
            
            for(int i=0; i<= existingStds.size() - 1 ; i++){

                cout<<"================Student # "<<i+1<<"================"<<endl;
                cout<<"Student Name : "<<existingStds[i]<<" || ";
                cout<<"Student CNIC# : "<<existingCnics[i]<<" || ";
                cout<<"Student Password : "<<existingPasswords[i]<<" || ";
                cout<<"Student AG# : "<<existingAgNums[i]<<" || ";
                cout<<"Student GPA(2nd Sem) : "<<studentGPAs[i]<<" || ";
                cout<<"Student CGPA : "<<studentCGPAs[i]<<endl;
            }
            cout<<"==========================================================="<<endl;
            cout<<"Total Number of Students : "<<existingStds.size()<<endl;
            cout<<"==========================================================="<<endl;
            
            cout<<"--------------------"<<endl;
            cout<<"You are being redirected to the Menu."<<endl;
            cout<<"--------------------"<<endl;
        }  
        else if(choiceASI == "2"){
            
            string userChoiceASI;
            cout<<"Enter the AG# or CNIC# : ";
            cin>>userChoiceASI;
            
            bool stdFound = false;

            for(int i=0; i <= existingStds.size() - 1 ; i++){
                
                if(userChoiceASI == existingCnics[i] || userChoiceASI == existingAgNums[i]){
                    
                    cout<<"==========================================================="<<endl;
                    cout<<"Student Name : "<<existingStds[i]<<" || ";
                    cout<<"Student CNIC# : "<<existingCnics[i]<<" || ";
                    cout<<"Student Password : "<<existingPasswords[i]<<" || ";
                    cout<<"Student AG# : "<<existingAgNums[i]<<" || ";
                    cout<<"Student GPA(2nd Sem) : "<<studentGPAs[i]<<" || ";
                    cout<<"Student CGPA : "<<studentCGPAs[i]<<endl;
                    cout<<"==========================================================="<<endl;
                    stdFound = true;
                }
            }

            if(!stdFound){

                cout<<"Student Data not Found."<<endl;
            }

            cout<<"--------------------"<<endl;
            cout<<"You are being redirected to the Menu."<<endl;
            cout<<"--------------------"<<endl;
        }     
        else if(choiceASI == "3"){
            
            cout<<"--------------------"<<endl;
            cout<<"You are being redirected to the Menu."<<endl;
            cout<<"--------------------"<<endl;
        }     
        else{
            cout<<"Invalid Input. Try Again."<<endl;
            cout<<"--------------------"<<endl;
            goto retryASI;
        }
    }
    
    //------------- admin's View Reviews Function-------------
    
    void admViewRevs(){
        
        cout<<"----------View Course / Teacher Reviews----------"<<endl;
        cout<<"Your Name : "<<adminName<<endl;
        cout<<"Your Subject : CS-409"<<endl;
        cout<<"Course Title : Object-Oriented Programming"<<endl;
        
        if(stdReviews.size() > 0){
            
            for(int i=0; i <= stdReviews.size()-1 ; i++){
                
                cout<<"================Review # "<<i+1<<"================"<<endl;
                cout<<"Message : "<<stdReviews[i]<<endl;
                cout<<"==========================================================="<<endl;
            }
            
            cout<<"==========================================================="<<endl;
            cout<<"Total Number of Reviews : "<<stdReviews.size()<<endl;
            cout<<"==========================================================="<<endl; 
        }
        else{
            
            cout<<"No Reviews Available."<<endl;
        }
        
        cout<<"--------------------"<<endl;
        cout<<"You are being Redirected to the Menu."<<endl;
        cout<<"--------------------"<<endl;
    }
    
    //-------------Edit Admin's Info Function-------------
    
    void editAdminInfo(){
        
        cout<<"----------Edit Admin's Info----------"<<endl;
        
        bool editAdminInfoAccess = false;
        cout<<"Security Question :- "<<endl;
        cout<<"--------------------"<<endl;
        
        while(!editAdminInfoAccess){

            string adminTestAns;
            cout<<"Your Favourite Section in Software Engineering : ";
            cin>>adminTestAns;
            
            if(adminTestAns == "E2" || adminTestAns == "e2"){
                
                cout<<"Impressive! Security Procedure Completed."<<endl;
                cout<<"--------------------"<<endl;
                editAdminInfoAccess = true;
            }
            else{

                cout<<"COME ON!! Ewwwww!!!!!"<<endl;
                cout<<"Try Again. You can guess better."<<endl;
                cout<<"--------------------"<<endl;
            }
        }

        retryEAI:
        
        string adminChoiceEAI;
        cout<<"Please select an Option :- "<<endl;
        cout<<"1. Edit Admin's Name."<<endl;
        cout<<"2. Edit Admin's CNIC#."<<endl;
        cout<<"3. Edit Admin's Password."<<endl;
        cout<<"4. Edit Admin's AG#."<<endl;
        cout<<"5. Go back to the Admin Menu."<<endl;
        cout<<"Input(1-5) : ";
        cin>>adminChoiceEAI;
        cout<<"--------------------"<<endl;
        
        if(adminChoiceEAI == "1"){
            
            cout<<"The Current Name of the Admin is : "<<adminName<<endl;

            cin.ignore();
            string newName;
            cout<<"Enter new Name : ";
            getline(cin, newName);
            
            adminName = newName;
            
            cout<<"Name Updated Successfully."<<endl;
        }
        else if(adminChoiceEAI == "2"){
            
            retryChngAdCnic:
            cout<<"The Current Name of the Admin is : "<<adminName<<endl;
            cout<<"The Current CNIC# of the Admin is : "<<adminCnic<<endl;
            
            string newCnic;
            cout<<"Enter New CNIC#(Without Space) : ";
            cin>>newCnic;

            if(newCnic.length() != 13){

                cout<<"CNIC# must be of 13 digits."<<endl;
                cout<<"--------------------"<<endl;
                goto retryChngAdCnic;
            }

            adminCnic = newCnic;
            
            cout<<"CNIC# Updated Successfully."<<endl;
        }  
        else if(adminChoiceEAI == "3"){
            
            retryChngAdPass:
            cout<<"The Current Name of the Admin is : "<<adminName<<endl;
            cout<<"The Current Password of the Admin is : "<<adminPass<<endl;

            string newPass;
            cout<<"Enter New Password(Without Space) : ";
            cin>>newPass;

            if(newPass.length() < 8){

                cout<<"Password must be of at least 8 characters. Try Again"<<endl;
                cout<<"--------------------"<<endl;
                goto retryChngAdPass;
            }
            
            adminPass = newPass;
            
            cout<<"Password Updated Successfully."<<endl;
        }
        else if(adminChoiceEAI == "4"){
            
            cout<<"The Current AG# of the Admin is : "<<adminAgNum<<endl;
            string newAgNum;
            cout<<"Enter new AG#(Without Dashes) : ";
            cin>>newAgNum;
            
            adminAgNum = newAgNum;
            
            cout<<"AG# has been edited Successfully."<<endl;
        }
        else if(adminChoiceEAI == "5"){
            
            cout<<"--------------------"<<endl;
            cout<<"You are being redirected to the menu."<<endl;
            cout<<"--------------------"<<endl;
        }
        else{
            
            cout<<"Invalid Input. Try Again."<<endl;
            goto retryEAI;
        }
    }
    
    //-------------Edit Admin's Students' Info Function-------------
    
    void editAdStdInfo(){
        
        retryCASI:
        cout<<"----------Edit Students' Info :: Admin Portal----------"<<endl;
        string agNumCASI, userChoiceCASI;
        
        cout<<"Enter the Student's AG# : ";
        cin>>agNumCASI;
        cout<<"--------------------"<<endl;
        cout<<"Please select an Option :- "<<endl;
        cout<<"1. Edit Name."<<endl;
        cout<<"2. Edit CNIC#."<<endl;
        cout<<"3. Edit Password."<<endl;
        cout<<"4. Go back to the Menu."<<endl;
        cout<<"Input(1-3) : ";
        cin>>userChoiceCASI;
        cout<<"--------------------"<<endl;
        
        if(userChoiceCASI == "1"){   //OPTION 1
            
            for(int i=0; i <= existingStds.size() - 1 ; i++){
                
                if(agNumCASI == existingAgNums[i]){
                    
                    cin.ignore();
                    cout<<"The Current Name of the Student is : "<<existingStds[i]<<endl;
                    
                    string chngName;
                    cout<<"Edit New Name : ";
                    getline(cin, chngName);
                    
                    existingStds[i] =  chngName;
                    cout<<"Name Updated Successfully."<<endl;
                }
            }

            cout<<"--------------------"<<endl;
            cout<<"You are being redirected to the menu."<<endl;
            cout<<"--------------------"<<endl;
        }
        else if(userChoiceCASI == "2"){  //OPTION 2
            
            for(int i=0; i <= existingStds.size() - 1 ; i++){
                
                if(agNumCASI == existingAgNums[i]){
                    
                    retryChngStdCnic:
                    cout<<"The Current Name of the Student is : "<<existingStds[i]<<endl;
                    cout<<"The Current CNIC# of the Student is : "<<existingCnics[i]<<endl;
                    
                    string chngCnic;
                    cout<<"Enter New CNIC# : ";
                    cin>>chngCnic;

                    if(chngCnic.length() != 13){

                        cout<<"CNIC# must be of 13 digits."<<endl;
                        cout<<"--------------------"<<endl;
                        goto retryChngStdCnic;
                    }
                    
                    existingCnics[i] =  chngCnic;
                    cout<<"CNIC# Updated Successfully."<<endl;
                }
            }

            cout<<"--------------------"<<endl;
            cout<<"You are being redirected to the menu."<<endl;
            cout<<"--------------------"<<endl;
        }
        else if(userChoiceCASI == "3"){  //OPTION 3
            
            for(int i=0; i <= existingStds.size() - 1 ; i++){
                
                if(agNumCASI == existingAgNums[i]){
                    
                    retryChngStdPass:
                    cout<<"The Current Name of the Student is : "<<existingStds[i]<<endl;
                    cout<<"The Current Password of the Student is : "<<existingPasswords[i]<<endl;
                    
                    string chngPass;
                    cout<<"Edit New Password(No Blank Spaces) : ";
                    cin>>chngPass;

                    if(chngPass.length() < 5){

                        cout<<"Password must contain at least 5 characters. Try Again."<<endl;
                        cout<<"--------------------"<<endl;
                        goto retryChngStdPass;
                    }
                    
                    existingPasswords[i] =  chngPass;
                    cout<<"Password Updated Successfully."<<endl;
                }
            }

            cout<<"--------------------"<<endl;
            cout<<"You are being redirected to the menu."<<endl;
            cout<<"--------------------"<<endl;
        }
        else if(userChoiceCASI == "4"){
            
            cout<<"--------------------"<<endl;
            cout<<"You are being redirected to the menu."<<endl;
            cout<<"--------------------"<<endl;
        }
        else{
            
            cout<<"Invalid Choice. Try Again."<<endl;
            goto retryCASI;
        }
        
    }
    
    //-------------Admin : Students we are concerned about-------------
    
    void concerningFigures(){
        cout<<"----------Conerning Figures of the Class----------"<<endl;

        for(int i=0; i <= concerningFiguresNames.size()-1; i++){
            
            cout<<"=============================="<<i+1<<"============================="<<endl; 
            cout<<"Name : "<<concerningFiguresNames[i]<< " || "<< "AG# : " <<concerningFigAgNums[i]<<endl;
        }
        
        cout<<"============================================================"<<endl; 

    bool returnResult;
    do{

        returnResult = confirmReturn();
    }while(!returnResult);

    cout<<"--------------------"<<endl;
    cout<<"You are being redirected to the menu."<<endl;
    cout<<"--------------------"<<endl;
    }
    
    //-------------admin Exit Function-------------
    
    void adminExit(){
        
        cout<<"----------EXITING----------"<<endl;
        cout<<"--------------------"<<endl;
        cout<<"Thank you for making such a lasting difference in your Students' lives."<<endl;
        cout<<"--------------------"<<endl;
    }

    //-------------Forgot Admin Password Function-------------
    
    void forgotAdminPass(){
        
        bool shouldExitRecovery = false;

        while(!shouldExitRecovery){

            cout<<"----------Recover Admin Password----------"<<endl;
            string adRecoveryK;
            cout<<"Enter you Recovery Key : ";
            cin>>adRecoveryK;
            cout<<"--------------------"<<endl;
            
            if(adRecoveryK == "iLoveE1" || adRecoveryK == "ilovee1" || adRecoveryK == "ILoveE1" || adRecoveryK == "ILOVEE1"){

                cout<<"We Love you toooooooooooooo"<<endl;
                bool newPassFormat = false;

                while(!newPassFormat){

                    string newAdPass;
                    cout<<"Enter the new Password : ";
                    cin>>newAdPass;
                    
                    if(newAdPass.length() < 8){
                        
                        cout<<"Admin Password Must be of 8 or more Characters."<<endl;
                    }
                    else{

                        adminPass = newAdPass;
                        cout<<"Password Changed Successfully."<<endl;
                        cout<<"--------------------"<<endl;
                        newPassFormat = true;
                        shouldExitRecovery = true;
                    }
                }
            }
            else{

                cout<<"*Disappointed*. Ok, here is the guess : iLove--"<<endl;

                string adChoiceFP;
                cout<<"Press Y to retry, else return to Menu : ";
                cin>>adChoiceFP;
                cout<<"--------------------"<<endl;

                if(adChoiceFP == "Y" || adChoiceFP == "y"){

                    cout<<"Great!"<<endl;
                }
                else{

                    cout<<"*Smiling in Pain*"<<endl;
                    cout<<"--------------------"<<endl;
                    shouldExitRecovery = true;
                }
            }
        }
    }
    
};

class stdPortal : public adminPortal{  //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<STUDENT PORTAL CLASS>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>.
    
    public:

    //-------------Student Portal Menu Function-------------
    void studentPortalMenu(){
        
        cout<<"-------------Student Portal-------------"<<endl;
        cout<<"Hey "<<stdName<<"!. Welcome to your Student Portal."<<endl;
        
        cout<<"Please Select an option to proceed :- "<<endl;
        cout<<"1. See Your Profile Info. "<<endl;
        cout<<"2. Dashboard."<<endl;
        cout<<"3. Result."<<endl;
        cout<<"4. Change your Password."<<endl;
        cout<<"5. Teacher/Course Review. "<<endl;
        cout<<"6. Login to another account."<<endl;
        cout<<"7. Exit."<<endl;
        cout<<"--------------------"<<endl;
    }
    
    //-------------Student's Info Function-------------
    void stdInfo(){
        
        cout<<"----------Student Info----------"<<endl;
        cout<<"Welcome to your Student Portal."<<endl;
        cout<<"Hey "<<stdName<<"!"<<endl;
        cout<<"Your AG# is : "<<stdAgNum<<endl;
        cout<<"Your CNIC# is : "<<stdCNIC<<endl;
        cout<<"Your Password is : *****"<<endl;
        
        bool revealPassEscape = false;
        
        while(!revealPassEscape){

            string choiceSI;
            cout<<"Press R to reveal your Password. N to continue."<<endl;
            cout<<"Input : ";
            cin>>choiceSI;
            
            if(choiceSI == "R" || choiceSI == "r"){

                cout<<"Your Password is : "<<stdPassword<<endl;

                cout<<"--------------------"<<endl;
                cout<<"You are being redirected to the menu."<<endl;
                cout<<"--------------------"<<endl;
                revealPassEscape = true;
            }
            else if(choiceSI == "N" || choiceSI == "n"){
                
                cout<<"--------------------"<<endl;
                cout<<"You are being redirected to the menu."<<endl;
                cout<<"--------------------"<<endl;
                revealPassEscape = true;
            }
            else{

                cout<<"Invalid Choice. Try Again."<<endl;
            }
        }
    }

    //-------------Student's DashBoard Function-------------
    
    void stdDashboard(){

        cout<<"----------Student Dashboard----------"<<endl;
        for(int i=0; i<=existingStds.size()-1; i++){
            
            if(stdAgNum == existingAgNums[i]){

                if(i>=42){

                    cout<<"==========================================================="<<endl;
                    cout<<"You are not Enrolled in any Course yet."<<endl;
                    cout<<"==========================================================="<<endl;
                }
                else{

                    cout<<"Total Number of Courses : 8"<<endl;
                    
                    cout<<"==========================================================="<<endl;
                    cout<<"1. CS-409 : OBJECT ORIENTED PROGRAMMING : 3(2-1)"<<endl;
                    cout<<"2. EDU-306 : CIVICS AND COMMUNITY ENGAGMENT : 2(2-0)"<<endl;
                    cout<<"3. IS-401 : ROHANIYAT : (Non-Credit)"<<endl;
                    cout<<"4. CS-407 : OPERATING SYSTEMS : 3(2-1)"<<endl;
                    cout<<"5. MATH-407 : MULTIVARIABLE CALCULUS : 3(3-0)"<<endl;
                    cout<<"6. BBA-412 : FINANCIAL MANAGEMENT-I : 3(3-0)"<<endl;
                    cout<<"7. SE-401 : SOFTWARE ENGINEERING : 3(2-1)"<<endl;
                    cout<<"8. TGM-401 : TUTORIAL GROUP MEETING FOR SOFT SKILLS : (Non-Credit)"<<endl;
                    cout<<"==========================================================="<<endl;
                }
            }
        }
        
        bool returnResult;
        do{

            returnResult = confirmReturn();
        }while(!returnResult);
        
        
    }
    
    //-------------Student's Result Function-------------

    void stdResult(){
        
        cout<<"----------Student Result----------"<<endl;
        
        for(int i=0; i <= existingStds.size() - 1; i++){
            
            if(stdAgNum == existingAgNums[i]){
                
                cout<<"Hey "<<stdName<<"!"<<endl;
                cout<<"Your GPA is : "<<studentGPAs[i]<<endl;
                cout<<"Your CGPA is : "<<studentCGPAs[i]<<endl;
                cout<<"--------------------"<<endl;
            }
        }

        bool returnResult;
        do{

            returnResult = confirmReturn();
        }while(!returnResult);
    }

    //-------------Change Student's Password Function-------------
    
    void changeStdPass(){

        string currentPass, newStdPass;
        bool passChngSuccess = false;
        bool passChngLoop = true;
        
        while(passChngLoop){

            cout<<"----------Change Student's Password----------"<<endl;
            cout<<"Enter your Previous Password : ";
            cin>>currentPass;
            
            cout<<"Enter new Password : ";
            cin>>newStdPass;
            
            if(newStdPass.length()<5){

                cout<<"New Password must contain at least 5 characters. Try Again."<<endl;
            }
            else if(currentPass == stdPassword){

                for(int i=0; i<= existingStds.size() -1; i++ ){

                    if(stdAgNum == existingAgNums[i]){

                        existingPasswords[i] = newStdPass;
                        stdPassword = newStdPass;
                        cout<<"Password Changed Successfully."<<endl; 
                        passChngSuccess = true;
                        passChngLoop = false;
                    }
                }
            }
            else{
            
                cout<<"Invalid Current Password. Try Again."<<endl;
            }

            if(!passChngSuccess){

                string userChoiceCP;
                cout<<"Press M to return to Menu, else to retry."<<endl;
                cout<<"Input : ";
                cin>>userChoiceCP;
                cout<<"--------------------"<<endl;
            
                if(userChoiceCP == "M" || userChoiceCP == "m"){
                
                    cout<<"--------------------"<<endl;
                    cout<<"You are being redirected to the Menu."<<endl;
                    cout<<"--------------------"<<endl;
                    passChngLoop = false;
                }
                else{
                
                    passChngLoop = true;
                }
            }
        }
        
    }
    
    //-------------Student Reviews Function-------------
    
    void stdCourseRevs(){
        
        cout<<"----------SUBMIT REVIEWS----------"<<endl;
        
        for(int i=0; i<=existingStds.size()-1;i++){

            if(stdAgNum == existingAgNums[i]){

                if(i>=42){

                    cout<<"--------------------"<<endl;
                    cout<<"No Course Available for Evaluation."<<endl;
                    cout<<"--------------------"<<endl;
                }
                else{

                    cout<<"One Course / Teacher is available for Evaluation."<<endl;
                    cout<<"--------------------"<<endl;
                    
                    cin.ignore();
                    string reviewSCE;
                    cout<<"Teacher's Name : "<<adminName<<endl;
                    cout<<"Course Title : Object-Oriented Programming."<<endl;
                    cout<<"--------------------"<<endl;
                    cout<<"Please type your Message : ";
                    getline(cin, reviewSCE);
                    cout<<"--------------------"<<endl;
        
                    stdReviews.push_back(reviewSCE);
                    cout<<"Review Submitted"<<endl;
                }
            }
        }
        
        bool returnResult;
        do{

            returnResult = confirmReturn();
        }while(!returnResult);
    }
    
    //-------------Student Exit Function-------------
    
    void stdExit(){
        
        cout<<"----------EXITING----------"<<endl;
        cout<<"--------------------"<<endl;
        cout<<"Just give it up already."<<endl;
        cout<<"--------------------"<<endl;
    }
    
    //================Dectructor=====================
    ~stdPortal(){
        
        cout<<"YOU CAN CLOSE THE WINDOW NOW."<<endl;
    }
    
};

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<CLASSES ENDING HERE>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

int main(){   //<<<<<<<<<<<<<<<<<<<int main()>>>>>>>>>>>>>>>>>>>>>>>
    
    stdPortal obj;
    
    //------------- WELCOME PART -------------
    firstInterface:
    cout<<"----------Welcome to Learning Management System----------"<<endl;
    string userChoiceMF; 
    bool accountAccess = false;
    bool stdPortalAccess = false;
    bool adminPortalAccess = false;
    
    while(!accountAccess){
        
        cout<<"Select an option : "<<endl;
        cout<<"1. Create a New Account."<<endl;
        cout<<"2. Login to an Existing Account."<<endl;
        cout<<"3. Exit."<<endl;
        
        cout<<"Input(1-3) : ";
        cin>>userChoiceMF;
        
        system("cls");
        
        if(userChoiceMF == "1"){
            
            string continueChoiceNA;
            cout<<"Do you want to create a New Account?"<<endl;
            cout<<"Press Y to Continue, else to go back : ";
            cin>>continueChoiceNA;
            
            if(continueChoiceNA == "Y" || continueChoiceNA == "y"){
                
                cin.ignore();
                obj.newAccount();  //New Account
            }
            else{
                
                cout<<"--------------------"<<endl;
                cout<<"You are being redirected to the previous Page."<<endl;
                cout<<"--------------------"<<endl;
            }
        }
        else if(userChoiceMF == "2"){
            
            cin.ignore();   
            bool accLoginResult = obj.existingAccount();   //Student LOGIN
            
            if(accLoginResult){
                
                accountAccess = true;
                stdPortalAccess = true;
            }
            else{
                
                cout<<"--------------------"<<endl;
                cout<<"You are being redirected to the Previous Page."<<endl;
                cout<<"--------------------"<<endl;
            }
        }
        else if(userChoiceMF == "3"){
            
            cout<<"--------------------"<<endl;
            cout<<"At least think about your future before tapping anywhere. *Shaking my Head with disappointment*"<<endl;
            cout<<"--------------------"<<endl;
            accountAccess = true;
        }
        else if(userChoiceMF == "2021ag2248"){
            
            string adminLogPass;
            cout<<"Enter your Password : ";
            cin>>adminLogPass;

            bool admLoginResult = obj.adminAccLogin(adminLogPass);   //Admin LOGIN

            if(admLoginResult == true){

                cout<<"Login Successful"<<endl;
                accountAccess = true;
                adminPortalAccess = true;
            }
            else if(admLoginResult == false){

                cout<<"Login Failed"<<endl;
            }
        }
        else if(userChoiceMF == "2021ag2248FP"){

            obj.forgotAdminPass();    //Admin Forget Password
        }
        else{

            cout<<"Invalid Choice. Try again."<<endl;
        }
    }

    //------------- STUDENT PORTAL -------------
    if(stdPortalAccess == true){

        bool stdMenuEscape = false;
        bool loginAnotherAcc = false;
        
        while(stdMenuEscape == false){

            obj.studentPortalMenu();  //Student Portal Menu

            string stdPortalChoice;
            cout<<"Select an option(1-7) : ";
            cin>>stdPortalChoice;

            if( stdPortalChoice == "1"){   //OPTION 1  >> Student Info
                
                system("cls");
                obj.stdInfo();
            }
            else if(stdPortalChoice == "2"){   //OPTION 2  >> Dashboard
                
                system("cls");
                obj.stdDashboard();
            }
            else if(stdPortalChoice == "3"){  //OPTION 3  >> Result
                
                system("cls");
                obj.stdResult();
            }
            else if(stdPortalChoice == "4"){  //Option 4 >> Change Password
                
                system("cls");
                obj.changeStdPass();
            }
            else if(stdPortalChoice == "5"){  //OPTION 5 >> teacher/course reviews

                system("cls");
                obj.stdCourseRevs();
            }
            else if(stdPortalChoice == "6"){  //OPTION 6 >> Login to another account
                
                system("cls");
                stdMenuEscape = true;
                loginAnotherAcc = true;
            }
            else if(stdPortalChoice == "7"){   //OPTION 7  >> Exit
                
                system("cls");
                obj.stdExit();
                stdMenuEscape = true;
            }
            else{  //Invalid Option
                
                system("cls");
                cout<<"Invalid Option. Try Again."<<endl;
                cout<<"--------------------"<<endl;
            }
        }
    
        if(loginAnotherAcc == true){

            goto firstInterface;
        }
    }

    //------------- ADMIN PORTAL -------------
    else if(adminPortalAccess == true){
        
        bool adminMenuEscape = false;
        bool loginAnotherAcc = false;

        while(adminMenuEscape == false){       

            obj.adminPortalMenu();  //Admin Portal Menu

            string adminPortalChoice;
            cout<<"Select an option(1-8) : ";
            cin>>adminPortalChoice;

            if(adminPortalChoice == "1"){   //OPTION 1  >> Admin Info
                
                system("cls");
                obj.adminInfo();
            }
            else if(adminPortalChoice == "2"){   //OPTION 2  >> View Students' Info.
                
                system("cls");
                obj.adminStudentsInfo();
            }
            else if(adminPortalChoice == "3"){  //OPTION 3  >> See Course /Teacher's Reviews
                
                system("cls");
                obj.admViewRevs();
            }
            else if(adminPortalChoice == "4"){  //Option 4 >> Edit Admin's Info
                
                system("cls");
                obj.editAdminInfo();
            }
            else if(adminPortalChoice == "5"){   //OPTION 5  >> Edit Students' Info.
                
                system("cls");
                obj.editAdStdInfo();
            }
            else if(adminPortalChoice == "6"){  //OPTION 6 >> Login to another account
                
                system("cls");
                adminMenuEscape = true;
                loginAnotherAcc = true;
            }
            else if(adminPortalChoice == "7"){  //OPTION 7 >> Concerning Figures

                system("cls");
                obj.concerningFigures();
            }
            else if(adminPortalChoice == "8"){  //OPTION 8 >> Exit

                system("cls");
                obj.adminExit();
                adminMenuEscape = true;
            }
            else{   //Invalid Option   
                
                system("cls");
                cout<<"Invalid Option. Try Again."<<endl;
                cout<<"--------------------"<<endl;
            }
        
        }  //Admin While loop Ending

        if(loginAnotherAcc == true){

            goto firstInterface;
        }
    }

    return 0;
}