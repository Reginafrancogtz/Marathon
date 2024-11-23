#include <iostream>
#include "Player.h"
#include "MusicQuestion.h"
#include "HistoryQuestion.h"
#include "Game.h"
#include "Question.h"  // Include the base Question class header

int main() {
    // Create a player
    std::string playerName;
    std::cout << "Enter player name: ";
    std::getline(std::cin, playerName);
    
    Player player(playerName, 0);  // Player starts with a score of 0

    // Music Questions
    std::vector<std::string> musicOptions1 = {"Artist A", "Artist B", "Artist C", "Artist D"};
    MusicQuestion musicQ1(
        "Who is the artist of the album 'Album Name'?", 
        "Music", 
        musicOptions1, 
        1,  // Assume the correct answer is option 1
        "Artist B", 
        "Album Name", 
        "Pop"
    );

    std::vector<std::string> musicOptions2 = {"Artist E", "Artist F", "Artist G", "Artist H"};
    MusicQuestion musicQ2(
        "Which artist released the song 'Song X'?", 
        "Music", 
        musicOptions2, 
        2, 
        "Artist F", 
        "Album Z", 
        "Rock"
    );

    std::vector<std::string> musicOptions3 = {"Artist I", "Artist J", "Artist K", "Artist L"};
    MusicQuestion musicQ3(
        "Which album did 'Artist I' release in 2005?", 
        "Music", 
        musicOptions3, 
        0, 
        "Artist I", 
        "Album 2005", 
        "Jazz"
    );

    std::vector<std::string> musicOptions4 = {"Artist M", "Artist N", "Artist O", "Artist P"};
    MusicQuestion musicQ4(
        "Which genre is associated with 'Artist N'?", 
        "Music", 
        musicOptions4, 
        3, 
        "Artist N", 
        "Album Q", 
        "Blues"
    );

    std::vector<std::string> musicOptions5 = {"Artist Q", "Artist R", "Artist S", "Artist T"};
    MusicQuestion musicQ5(
        "What was the top hit by 'Artist R' in 2010?", 
        "Music", 
        musicOptions5, 
        1, 
        "Artist R", 
        "Album 2010", 
        "Hip-Hop"
    );

    // History Questions
    std::vector<std::string> historyOptions1 = {"Option 1", "Option 2", "Option 3", "Option 4"};
    HistoryQuestion historyQ1(
        "In which year did the event 'Event A' happen?", 
        "History", 
        historyOptions1, 
        2, 
        "Modern Era", 
        "Event A"
    );

    std::vector<std::string> historyOptions2 = {"Option 5", "Option 6", "Option 7", "Option 8"};
    HistoryQuestion historyQ2(
        "Who was the leader during 'Event B'?", 
        "History", 
        historyOptions2, 
        1, 
        "Ancient Period", 
        "Event B"
    );

    std::vector<std::string> historyOptions3 = {"Option 9", "Option 10", "Option 11", "Option 12"};
    HistoryQuestion historyQ3(
        "What year did the 'Battle of C' take place?", 
        "History", 
        historyOptions3, 
        3, 
        "Medieval Era", 
        "Battle of C"
    );

    std::vector<std::string> historyOptions4 = {"Option 13", "Option 14", "Option 15", "Option 16"};
    HistoryQuestion historyQ4(
        "Which civilization built the 'Structure D'?", 
        "History", 
        historyOptions4, 
        0, 
        "Ancient Civilizations", 
        "Structure D"
    );

    std::vector<std::string> historyOptions5 = {"Option 17", "Option 18", "Option 19", "Option 20"};
    HistoryQuestion historyQ5(
        "What year was 'Event E' signed?", 
        "History", 
        historyOptions5, 
        1, 
        "Modern History", 
        "Event E"
    );

    // Create a game instance with multiple music and history questions
    Game game(player, musicQ1, historyQ1);
    
    // Start the game
    game.startGame();

    // Music Questions
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

    // History Questions
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

    return 0;
}
