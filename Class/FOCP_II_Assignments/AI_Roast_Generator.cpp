/*Students will build a console-based program that generates funny roasts based on a user's name. The
program should produce different roasts each time it runs by randomly selecting from multiple roast
templates. For example: If the Input is Rahul, then the possible output can be:
• “Rahul writes code so slow that even a turtle switched to Python.”
• “If procrastination were an Olympic sport, Rahul would already have a gold medal.”
• “Rahul’s debugging style is basically staring at the screen until the bug gets embarrassed and
leaves.”
What Students Have to Do
Students should create a program that:
• Takes user input (name)
• Stores multiple roast templates
• Uses random selection to generate different roasts
• Replaces placeholders like {name} with the actual input
• Displays a unique roast message
The program should have at least 8–10 roast templates.
Example template format:
"{name}'s code runs so slowly that even dial-up internet feels fast."
"If laziness had a brand ambassador, it would be {name}."
"{name} doesn't debug code — they negotiate with bugs."*/

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to replace placeholder {name} with actual name
string replaceNameInTemplate(string template_str, string name) {
    string placeholder = "{name}";
    size_t position = template_str.find(placeholder);
    
    // Keep replacing {name} until none are left
    while (position != string::npos) {
        template_str.replace(position, placeholder.length(), name);
        position = template_str.find(placeholder, position + name.length());
    }
    
    return template_str;
}

int main() {
    // Seed the random number generator with current time (ensures different output each run)
    srand(time(0));
    
    // Array of roast templates with {name} placeholder (12 unique templates)
    vector<string> roastTemplates = {
        "{name}'s code runs so slowly that even dial-up internet feels fast.",
        "If laziness had a brand ambassador, it would be {name}.",
        "{name} doesn't debug code — they negotiate with bugs.",
        "{name} writes code so slow that even a turtle switched to Python.",
        "If procrastination were an Olympic sport, {name} would already have a gold medal.",
        "{name}'s debugging style is basically staring at the screen until the bug gets embarrassed and leaves.",
        "{name} is the only person who can turn a simple problem into a GitHub issue.",
        "{name}'s commits look like they were written by a sleep-deprived hamster.",
        "If {name} were a programming language, they'd be Comic Sans.",
        "{name} has error messages that are more helpful than their code comments.",
        "{name}'s variable names are so cryptic even they forget what they mean.",
        "{name} thinks semicolons are optional suggestions."
    };
    
    // Display welcome message
    cout << "========================================" << endl;
    cout << "  Welcome to the AI Roast Generator!   " << endl;
    cout << "========================================" << endl;
    cout << endl;
    
    // Get user's name as input
    string userName;
    cout << "Enter your name: ";
    getline(cin, userName);
    
    // Generate a random index between 0 and the size of roastTemplates
    int randomIndex = rand() % roastTemplates.size();
    
    // Get the randomly selected template
    string selectedTemplate = roastTemplates[randomIndex];
    
    // Replace {name} placeholder with actual user name
    string roast = replaceNameInTemplate(selectedTemplate, userName);
    
    // Display the roast with nice formatting
    cout << endl;
    cout << "----------------------------------------" << endl;
    cout << "Your roast for today:" << endl;
    cout << "----------------------------------------" << endl;
    cout << roast << endl;
    cout << "----------------------------------------" << endl;
    cout << endl;
    
    return 0;
}