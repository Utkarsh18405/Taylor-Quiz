#include <iostream> 
#include <string>


char guess; //Answer user inputs for question.
int total;  //Total score.


//4 possible answers, correct answer and question score.
class Question{
public:
    void setValues(std::string, std::string, std::string, std::string, std::string, char, int); 
    void askQuestion(); 

private:
    std::string Question_Text;
    std::string answer_1;
    std::string answer_2;
    std::string answer_3;
    std::string answer_4;

    char correct_answer;
    int Question_Score;
};

int main()
{
    
    std::cout << R"(
𝓦𝓔𝓛𝓒𝓞𝓜𝓔 𝓣𝓐𝓨𝓛𝓞𝓡 𝓢𝓦𝓘𝓕𝓣 𝓠𝓤𝓘𝓩
-------By: Utkarsh -------
𝓛𝓮𝓽'𝓼 𝓼𝓮𝓮 𝓗𝓸𝔀 𝓜𝓾𝓬𝓱 𝓨𝓸𝓾 𝓚𝓷𝓸𝔀 𝓐𝓫𝓸𝓾𝓽 𝓣𝓪𝔂𝓵𝓸𝓻 𝓢𝔀𝓲𝓯𝓽  )" << "\n";

    std::cout << "Press enter to start...\n";
    std::cin.get();

    //Get the user's name.
    std::string name;
    std::cout << "What's your name?\n";
    std::cin >> name;
    std::cout << "\n";

    //Ask if user wants to start quiz.
    std::string respond;
    std::cout << "Are you ready to start the quiz, " << name << "? Yes/No.\n";
    std::cin >> respond;

    //If user says yes, the quiz begins.
    if (respond == "Yes" || respond == "yes") {
        std::cout << "\n";
        std::cout << "Good luck!\n";
        std::cout << "\n";
        std::cout << "Press enter to continue.";
        std::cin.get();
        std::cin.ignore();
    }else{
        std::cout << "\n";
        std::cout << "Goodbye!\n";
        std::cin.ignore();
        std::cin.get();
        return 0;
    }//Else, quiz ends.

    //Instances of the questions. 
    //25 questions total generated for this quiz. 
    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    Question q6;
    Question q7;
    Question q8;
    Question q9;
    Question q10;
    Question q11;
    Question q12;
    Question q13;
    Question q14;
    Question q15;
    Question q16;
    Question q17;
    Question q18;
    Question q19;
    Question q20;
    
 
    //Calling the member function setValues. 
    //Question is set, 4 answer choices, the correct char answer, 1 points per question.
    q1.setValues("1. What is Taylor's Birth year?",
        "1987",
        "1989",
        "1986",
        "1990",
        'b',
        1);

    q2.setValues("2. What is her MoM's Name ",
        "Andrea Swift",
        "Natasha Swift",
        "Mortein Swift",
        "Crazy Lady 69",
        'a',
        1);

    q3.setValues("3. In the music video for Teardrops on My Guitar, what colour is the gown Taylor wears?",
        "red ",
        "white ",
        "green ",
        "pink ",
        'c',
        1);

    q4.setValues("4. Which famous person was Starlight written for?",
        "Razel Qesto",
        "Ethel Kennedy",
        "Linda Martin",
        "Alom Bogra",
        'b',
        1);

    q5.setValues("5. What emoji inspired a major theme of the reputation album?",
        "  Donkey emoji",
        " The snake emoji ",
        " Lion emoji ",
        " panther emoji",
        'b',
        1);

    q6.setValues("6.  What type of weather features heavily in Taylor's songs?",
        "Snow",
        "Fire",
        "Rain",
        "Summer",
        'c',
        1);

    q7.setValues("7. After discovering a famous thread about herself, Taylor wore a top saying 'No, it's ....'?",
        "Jhon",
        "Martin",
        "Becky",
        "Robert",
        'c',
        1);

    q8.setValues("8.  The intro to Last Kiss is exactly 27 seconds long, said to represent what?",
        " The length of the phone call with Austin Martinwhen he broke up with her",
        " The length of the phone call with Roger James when he broke up with her",
        " The length of the phone call with Joe Jonas when he broke up with her",
        " The length of the phone call with Evenmore when he broke up with her",
        'c',
        1);

    q9.setValues("9. What month does Taylor sing about 'going back to all the time'?",
        "December",
        "June",
        "july",
        "May",
        'a',
        1);

    q10.setValues("10. After dropping Netflix documentary Miss Americana what song did Taylor release?",
        "Right one",
        "Cool One",
        "The Old One",
        "Only the Young",
        'd',
        1);

    q11.setValues("11.  Taylor dressed up as who when she performed Frozen with Idina Menzel on the 1989 tour?",
        "Olaf",
        "Owl",
        "Graany",
        "Kabira",
        'a',
        1);

    q12.setValues("12. Taylor appeared on the cover of Vogue with which friend?",
        "Ross Saesten",
        "Karlie Kloss",
        "Rogers",
        "Gnyus",
        'b',
        1);

    q13.setValues("13.  In what Love Actually style movie did Taylor star in?",
        "Childerns Day",
        "Mother's Day",
        "Fathers's Day",
        "Valentine's Day",
        'd',
        1);

    q14.setValues("14. What are the names of Taylor's three cats?",
        "Meredith Grey, Olivia Benson and Benjamin Swift",
        "Meredith ross, Olivia Betson and Benjamin Franklin",
        "Mertdith Grey, Olivia yoil and Benjamin red",
        "Spiderman ben10 and Benjamin black",
        'a',
        1);
        
    q15.setValues("15. How old was Taylor when she started writing her own songs? ",
        "11",
        "12",
        "18",
        "20",
        'b',
        1);
        
    q16.setValues("Who was 'Dear John' allegedly written about?",
        "Singer John Mayer",
        "Singer Robet Jr",
        "Singer Jhon Becky",
        "Singer Post Malone",
        'a',
        1);
        
    q17.setValues(" What is special about the farm where Taylor grew up?",
        "It was a Christmas tree farm",
        "It was a simple tree farm",
        "It was a mix tree farm",
        "It was a one tree farm",
        'a',
        1);
        
    q18.setValues(" Which of her songs did Taylor say took the longest to write?",
        "All Too Hell ",
        "All Too Well",
        "All Too Sell",
        "All Too cool",
        'b',
        1);
        
    q19.setValues(" Who is Taylor named after?",
        "The singer James Taylor",
        "The singer Austin Taylor",
        "The singer Robert Taylor",
        "The singer Becky Taylor",
        'a',
        1);
        
    q20.setValues("How many Grammy awards has Taylor won?",
        "20",
        "18",
        "10",
        "5",
        'a',
        1);
        

    

    //Calling askQuestion member function. 
    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();
    q6.askQuestion();
    q7.askQuestion();
    q8.askQuestion();
    q9.askQuestion();
    q10.askQuestion();
    q11.askQuestion();
    q12.askQuestion();
    q13.askQuestion();
    q14.askQuestion();
    q15.askQuestion();
    q16.askQuestion();
    q17.askQuestion();
    q18.askQuestion();
    q19.askQuestion();
    q20.askQuestion();
    
    

    //Final score displayed when user finishes quiz.
    std::cout << "Your Total Score is " << total << " out of 20!\n";
    std::cout << "\n";

    //User scores above a 10, user passes the quiz.
    //Display message created with ASCII art generator.
    //Link: http://patorjk.com/software/taag/#p=display&f=Graffiti&t=Type%20Something%20
    if (total > 10) {
        std::cout << R"(

𝘾𝙊𝙉𝙂𝙍𝘼𝙏𝙐𝙇𝘼𝙏𝙄𝙊𝙉𝙎 𝙔𝙊𝙐 𝘿𝙊𝙉𝙀 𝙒𝙀𝙇𝙇 𝘼𝙉𝘿 𝙔𝙊𝙐 𝙆𝙉𝙊𝙒 𝙑𝙀𝙍𝙔 𝙈𝙐𝘾𝙃 𝘼𝘽𝙊𝙐𝙏 𝙏𝘼𝙔𝙇𝙊𝙍 𝙎𝙒𝙄𝙁𝙏

    )" << "\n";
        std::cout << "\n";
        std::cin.get();
        std::cin.ignore();
        return 0;
    }
    else
    {
        std::cout << "You failed... Sorry, 𝙂𝙊 𝘼𝙉𝘿 𝙎𝙀𝘼𝙍𝘾𝙃 𝘼𝘽𝙊𝙐𝙏 𝙏𝘼𝙔𝙇𝙊𝙍 𝙎𝙒𝙄𝙁𝙏 𝙄𝙉 𝙂𝙊𝙊𝙂𝙇𝙀 𝙁𝙊𝙍 𝙈𝙊𝙍𝙀 𝙄𝙉𝙁𝙊𝙍𝙈𝘼𝙏𝙄𝙊𝙉.\n";
        std::cout << "\n";
    }
    std::cin.get();
    std::cin.ignore();
    return 0;
}

//Function called for question guidelines. 
void Question::setValues(std::string q, std::string a1, std::string a2, std::string a3, std::string a4, char ca, int pa)
{
    Question_Text = q;
    answer_1 = a1;
    answer_2 = a2;
    answer_3 = a3;
    answer_4 = a4;
    correct_answer = ca;
    Question_Score = pa;
}
//Format for possible answers displayed when program executes. 
void Question::askQuestion()
{
    std::cout << "\n";
    std::cout << Question_Text << "\n";
    std::cout << "a. " << answer_1 << "\n";
    std::cout << "b. " << answer_2 << "\n";
    std::cout << "c. " << answer_3 << "\n";
    std::cout << "d. " << answer_4 << "\n";
    std::cout << "\n";

    //User enters their answer.
    std::cout << "What is your answer?" << "\n";
    std::cin >> guess;
    //If their answer is correct, message is displayed and 4 points are added to their score.
    if (guess == correct_answer) {
        std::cout << "\n";
        std::cout << "Correct!" << "\n";
        total = total + Question_Score;
        std::cout << "\n";
        std::cout << "Press enter to continue." << "\n";
        std::cin.get();
        std::cin.ignore();
    }
    else //If their answer is incorrect, message is displayed, no points added. 
         //Correct answer displayed. 
    {
        std::cout << "\n";
        std::cout << "Sorry, you're wrong..." << "\n";
        std::cout << "The correct answer is " << correct_answer << "." << "\n";
        std::cout << "\n";
        std::cout << "Press enter to continue." << "\n";
        std::cin.get();
        std::cin.ignore();
    }
}