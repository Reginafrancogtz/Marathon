#include <iostream>
#include "Player.h"
#include "MusicQuestion.h"
#include "HistoryQuestion.h"
#include "Game.h"
#include "Question.h"

int main() {
    Player player("", 0);  // The player starts with a score of 0
    int choice;

    while (true) {
        // Cyclic menu
        std::cout << "\nMarathon Game Menu\n";
        std::cout << "1. Start Game\n";
        std::cout << "2. View Score\n";
        std::cout << "3. Exit\n";
        std::cout << "Please select an option (1-3): ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                // Ask for the player's name only when starting the game
                if (player.getName().empty()) {
                    std::string playerName;
                    std::cout << "Enter player name: ";
                    std::cin.ignore();  // To clear the input buffer
                    std::getline(std::cin, playerName);
                    player.setName(playerName);
                }

                // Music questions
                std::vector<std::string> musicOptions1 = {"Adele", "Beyoncé", "Taylor Swift", "Ed Sheeran"};
                MusicQuestion musicQ1(
                    "Who is the artist of the album '25'?", 
                    "Music", 
                    musicOptions1, 
                    0,  // Correct answer is option 1 (Adele)
                    "Adele", 
                    "25", 
                    "Pop"
                );

                std::vector<std::string> musicOptions2 = {"The Beatles", "Led Zeppelin", "Queen", "Pink Floyd"};
                MusicQuestion musicQ2(
                    "Which band released the album 'Abbey Road'?", 
                    "Music", 
                    musicOptions2, 
                    0, 
                    "The Beatles", 
                    "Abbey Road", 
                    "Rock"
                );

                std::vector<std::string> musicOptions3 = {"Michael Jackson", "Elvis Presley", "Prince", "Madonna"};
                MusicQuestion musicQ3(
                    "Who is known as the 'King of Pop'?", 
                    "Music", 
                    musicOptions3, 
                    0, 
                    "Michael Jackson", 
                    "Thriller", 
                    "Pop"
                );

                std::vector<std::string> musicOptions4 = {"Kendrick Lamar", "Jay-Z", "Drake", "Lil Wayne"};
                MusicQuestion musicQ4(
                    "Which rapper released the album 'To Pimp a Butterfly'?", 
                    "Music", 
                    musicOptions4, 
                    0, 
                    "Kendrick Lamar", 
                    "To Pimp a Butterfly", 
                    "Hip-Hop"
                );

                std::vector<std::string> musicOptions5 = {"Billie Eilish", "Ariana Grande", "Lady Gaga", "Lizzo"};
                MusicQuestion musicQ5(
                    "Which artist released the album 'When We All Fall Asleep, Where Do We Go?'?", 
                    "Music", 
                    musicOptions5, 
                    0, 
                    "Billie Eilish", 
                    "When We All Fall Asleep, Where Do We Go?", 
                    "Pop"
                );

                // History questions
                std::vector<std::string> historyOptions1 = {"1776", "1492", "1865", "1914"};
                HistoryQuestion historyQ1(
                    "In which year did the Declaration of Independence happen?", 
                    "History", 
                    historyOptions1, 
                    0, 
                    "Modern History", 
                    "Declaration of Independence"
                );

                std::vector<std::string> historyOptions2 = {"Napoleon Bonaparte", "Winston Churchill", "Julius Caesar", "Genghis Khan"};
                HistoryQuestion historyQ2(
                    "Who was the leader during the Battle of Waterloo?", 
                    "History", 
                    historyOptions2, 
                    0, 
                    "Modern History", 
                    "Battle of Waterloo"
                );

                std::vector<std::string> historyOptions3 = {"1969", "1963", "1918", "1945"};
                HistoryQuestion historyQ3(
                    "What year did the moon landing occur?", 
                    "History", 
                    historyOptions3, 
                    0, 
                    "Modern History", 
                    "Moon Landing"
                );

                std::vector<std::string> historyOptions4 = {"The Roman Empire", "The Ottoman Empire", "The British Empire", "The Mongol Empire"};
                HistoryQuestion historyQ4(
                    "Which empire ruled the largest contiguous land empire in history?", 
                    "History", 
                    historyOptions4, 
                    3, 
                    "Medieval History", 
                    "Mongol Empire"
                );

                std::vector<std::string> historyOptions5 = {"The Cold War", "World War I", "World War II", "The American Revolution"};
                HistoryQuestion historyQ5(
                    "Which war lasted from 1939 to 1945?", 
                    "History", 
                    historyOptions5, 
                    2, 
                    "Modern History", 
                    "World War II"
                );

                // Create the game instance with the questions
                Game game(player, musicQ1, historyQ1);
                
                // Start the game
                game.startGame();

                // Music questions
                std::cout << "\nMusic Questions:\n";
                musicQ1.displayQuestion();
                int musicAnswer;
                std::cout << "Your answer (1-4): ";
                std::cin >> musicAnswer;
                if (musicQ1.checkAnswer(musicAnswer - 1)) {
                    std::cout << "Correct!\n";
                    player.updateScore(10);
                } else {
                    std::cout << "Wrong answer!\n";
                }

                musicQ2.displayQuestion();
                std::cout << "Your answer (1-4): ";
                std::cin >> musicAnswer;
                if (musicQ2.checkAnswer(musicAnswer - 1)) {
                    std::cout << "Correct!\n";
                    player.updateScore(10);
                } else {
                    std::cout << "Wrong answer!\n";
                }

                musicQ3.displayQuestion();
                std::cout << "Your answer (1-4): ";
                std::cin >> musicAnswer;
                if (musicQ3.checkAnswer(musicAnswer - 1)) {
                    std::cout << "Correct!\n";
                    player.updateScore(10);
                } else {
                    std::cout << "Wrong answer!\n";
                }

                musicQ4.displayQuestion();
                std::cout << "Your answer (1-4): ";
                std::cin >> musicAnswer;
                if (musicQ4.checkAnswer(musicAnswer - 1)) {
                    std::cout << "Correct!\n";
                    player.updateScore(10);
                } else {
                    std::cout << "Wrong answer!\n";
                }

                musicQ5.displayQuestion();
                std::cout << "Your answer (1-4): ";
                std::cin >> musicAnswer;
                if (musicQ5.checkAnswer(musicAnswer - 1)) {
                    std::cout << "Correct!\n";
                    player.updateScore(10);
                } else {
                    std::cout << "Wrong answer!\n";
                }

                // History questions
                std::cout << "\nHistory Questions:\n";
                historyQ1.displayQuestion();
                int historyAnswer;
                std::cout << "Your answer (1-4): ";
                std::cin >> historyAnswer;
                if (historyQ1.checkAnswer(historyAnswer - 1)) {
                    std::cout << "Correct!\n";
                    player.updateScore(10);
                } else {
                    std::cout << "Wrong answer!\n";
                }

                historyQ2.displayQuestion();
                std::cout << "Your answer (1-4): ";
                std::cin >> historyAnswer;
                if (historyQ2.checkAnswer(historyAnswer - 1)) {
                    std::cout << "Correct!\n";
                    player.updateScore(10);
                } else {
                    std::cout << "Wrong answer!\n";
                }

                historyQ3.displayQuestion();
                std::cout << "Your answer (1-4): ";
                std::cin >> historyAnswer;
                if (historyQ3.checkAnswer(historyAnswer - 1)) {
                    std::cout << "Correct!\n";
                    player.updateScore(10);
                } else {
                    std::cout << "Wrong answer!\n";
                }

                historyQ4.displayQuestion();
                std::cout << "Your answer (1-4): ";
                std::cin >> historyAnswer;
                if (historyQ4.checkAnswer(historyAnswer - 1)) {
                    std::cout << "Correct!\n";
                    player.updateScore(10);
                } else {
                    std::cout << "Wrong answer!\n";
                }

                historyQ5.displayQuestion();
                std::cout << "Your answer (1-4): ";
                std::cin >> historyAnswer;
                if (historyQ5.checkAnswer(historyAnswer - 1)) {
                    std::cout << "Correct!\n";
                    player.updateScore(10);
                } else {
                    std::cout << "Wrong answer!\n";
                }

                // Final score
                std::cout << "\nGame Over! " << player.getName() << "'s final score: " << player.getScore() << std::endl;

                break;  // Exit the loop to return to the menu after finishing the game
            }
            case 2:
                // Show score
                std::cout << "\n" << player.getName() << "'s current score: " << player.getScore() << std::endl;
                break;

            case 3:
                // Exit the program
                std::cout << "Exiting game. Goodbye!" << std::endl;
                return 0;

            default:
                std::cout << "Invalid choice. Please select a valid option (1-3)." << std::endl;
        }
    }
}
