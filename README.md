# Marathon
The Marathon game is a type of interactive game where participants must answer a series of questions, usually general knowledge questions, within a limited time. In this project, the aim is to answer questions from three categories: musical, historical and geographical. Each correct answer allows you to advance to the next question, and the goal is to get as many correct answers as possible without making any mistakes. As players progress, the questions can become more challenging, adding an element of difficulty to the game. This type of game can be played both individually and in groups, and adapts to different formats, from a simple multiple-choice quiz to a more complex experience with thematic categories and progressive levels. Creating such a game is a great idea because it not only allows players to test their knowledge and memory, but also encourages friendly competition and learning. Furthermore, by implementing it in a programming language such as C++, a scoring system, timers and interactive design can be incorporated, providing an engaging and entertaining gaming experience.

Developing such a game in C++ is not only a great exercise to improve programming skills, but it also turns out to be a fun and dynamic experience. The interaction with the player, the possibility of adding custom difficulty levels or categories, and real-time competition can make the game very entertaining. In addition, it is a project that can be expanded and improved in various ways. For all these reasons, a Questions and Answers Marathon game not only represents a technical challenge in C++, but also an opportunity to create an interactive product that can offer hours of fun to players and, at the same time, be an educational project that covers programming logic.




![Diagrama final drawio](https://github.com/user-attachments/assets/5416d6d6-5f4b-4a4c-989b-9a5cc960ff0b)

EXPLANATION OF EACH CLASS 
1. Game
Description:
Represents the main logic of the game, integrating the player and managing the questions. It contains methods to start the game, display questions, and control the overall flow.
Justification:
This class acts as the game controller, ensuring that interactions between the player and the questions occur in an orderly manner.
2. Player
Description:
Represents a player in the game, keeping track of their name and score.
Justification:
Defines and organizes the player’s basic information, allowing progress tracking during the game.
3. Question
Description:
An abstract base class representing generic questions with text, options, and a correct answer.
Justification:
Provides a general structure for questions, from which specific question types (music and history) can be derived.
4. Music Question
Description:
A subclass of Question that represents music-related questions, including specific information such as artist, album, and genre.
Justification:
Adds specific attributes and functionality for music-related questions, extending the generic Question class.
6. History Question
Description:
A subclass of Question that represents history-related questions about periods and events.
Justification:
Extends the Question class, adding historical details to create specific history-related questions.

RELATION BETWEEN CLASES 
1.	Association between Game and Player: The game requires a player to function, managing their progress and score.
2.	Aggregation between Game and Question: Game uses questions (both music and history) to interact with the player.
3.	Inheritance: MusicQuestion and HistoryQuestion extend Question, reusing its basic structure while adding specific attributes.



 
