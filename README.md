-----------------------------Character ------------------->

    Variable names can use:
    lowercase and uppercase letters (characters) and digits
    do not use special characters like @ # & " ...
    do not use accented characters like é è à ...
    do not start with a digit
            start only with a letter
    spaces are forbidden
            _ may be used instead of a space in the name of the variable
            YouCanUseUppercaseLettersBetweenWordsInsteadOfSpaces 

    char letter;
    char %c      => C  scanf("%c", &height);
    double %lf   => 1.92  %.2lf -> two decimal places scanf("%lf", &height);
    int %d       => 85   scanf("%d", &height);
    Cast  (int) done, (double) done


------------------ Simple program ------------------->

    #include <stdio.h>
    int main(void) {
        char letter;
        letter = 'A';
        printf("The letter is %c\n", letter);
        return 0;
    }

    #include <stdio.h>
    int main() {
        int balance;//creating a variable containing integer values
        balance = 50;//assigning the value 50 into the balance variable
        printf("I have %d dollars in my account\n",balance);
        //expense of 40 dollars
        balance = balance - 40;
        printf("I have %d dollars in my account\n",balance);
        //add 20 dollars in my account
        balance = balance + 20;
        printf("I have %d dollars in my account\n",balance);
        //expense of 30 dollars
        balance = balance - 30;
        printf("I have %d dollar in my account\n",balance);
        return 0;
    }

---------------- Read Simple input from user ---------------->

    --------- Project 1 ----------->

    include <stdio.h>
    int main() {
        double total_money, book_price;
        int max_books;

    //Read the total amount of money and the book price
    scanf("%lf", &total_money);
    scanf("%lf", &book_price);

    // Calculate the maximum number of books that can be purchased
    max_books = total_money / book_price;

    // Print the maximum number of books
    printf("%d\n", max_books);

    return 0;
    }

    --------- Project 2 ----------->

    include <stdio.h>
    int main() {
        int height, width, area;

    // Read the height and width
    scanf("%d", &height);
    scanf("%d", &width);

    // Calculate the area
    area = height * width;

    // Print the area
    printf("%d\n", area);

    return 0;
    }

    --------- Project 3 ----------->

    include <stdio.h>
    int main() {
        int height, width, area;

    // Read the height and width
    scanf("%d", &height);
    scanf("%d", &width);

    // Calculate the area
    area = height * width;

    // Print the area
    printf("%d\n", area);

    return 0;
    }

    --------- Project 4 ----------->

    include <stdio.h>
    int main() {
        int height, width, area;

    // Read the height and width
    scanf("%d", &height);
    scanf("%d", &width);

    // Calculate the area
    area = height * width;

    // Print the area
    printf("%d\n", area);

    return 0;
    }

    --------- Project 5 ----------->

    #include <stdio.h>
    int main() {
        int current_population;
        double growth_rate, projected_population;

    // Read the current population and the growth rate
    scanf("%d", &current_population);
    scanf("%lf", &growth_rate);

    // Calculate the projected population
    projected_population = current_population + (current_population * growth_rate / 100);
    // Print the projected population as a whole number
    printf("%d\n", (int)projected_population);

    return 0;
    }

    --------- Project 6 ----------->

    #include <stdio.h>
    int main() {
        int matches, boxSize, fullBoxes, leftoverMatches;
    
        // Read the number of matches and the size of each box
        scanf("%d", &matches);
        scanf("%d", &boxSize);
    
        // Calculate the number of full boxes
        fullBoxes = matches / boxSize;
    
        // Calculate the number of leftover matches
        leftoverMatches = matches % boxSize;
    
        // Print the number of full boxes and the number of leftover matches
        printf("%d\n", fullBoxes);
        printf("%d\n", leftoverMatches);
    
        return 0;
    }

---------------- Formatting the output ---------------->

    --------- Project 1 ----------->

    #include <stdio.h>
    int main(void) {
        // integer division
        printf("5/2 equals %d\n", 5/2);
        // floating point division
        printf("5.0/2.0 equals %lf\n", 5.0/2.0);
        printf("5/2.0 equals %lf\n", 5/2.0);
        printf("5.0/2 equals %lf\n", 5.0/2);
        return 0;
    }

    --------- Project 2 ----------->

    #include <stdio.h>
    int main() {
        double celsius, fahrenheit;
    
        // Read the temperature in degrees Celsius
        scanf("%lf", &celsius);
    
        // Convert degrees Celsius to degrees Fahrenheit
        fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    
        // Print the temperature in degrees Fahrenheit with 1 decimal place
        printf("%.1lf\n", fahrenheit);
    
        return 0;
    }

    --------- Project 3 ----------->

    #include <stdio.h>
    int main(void) {
        int intFive = 5;
        int intTwo = 2;
        double doubFive = 5.0;
        double doubTwo = 2.0;
        printf("intFive/intTwo equals %d\n", intFive/intTwo);
        printf("doubFive/doubTwo equals %lf\n", doubFive/doubTwo);
        printf("doubFive/intTwo equals %lf\n", doubFive/intTwo);
        printf("intFive/doubTwo equals %lf\n", intFive/doubTwo);
        return 0;
    }

    --------- Project 4 ----------->

    #include <stdio.h>
    int main() {
        double km, miles;
    
        // Read the distance in kilometers
        printf("Enter distance in kilometers: ");
        scanf("%lf", &km);
    
        // Convert kilometers to miles
        miles = km * 0.621371;
    
        // Print the distance in miles with 6 decimal places
        printf("%.6lf\n", miles);
    
        return 0;
    }

    --------- Project 5 ----------->

    #include <stdio.h>
    int main(void) {
        int age;
        double height;
        printf("What is your age and height (separate with spaces)?");
        scanf("%d %lf",&age,&height);
        printf("You are %d years old and %.2lf meters tall.",age,height);
        return 0;
    }

    --------- Project 6 ----------->

    #include <stdio.h>
    int main(void) {
        int age;
        double height;
        printf("What is your age?");
        scanf("%d",&age);
        printf("What is your height?");
        scanf("%lf",&height);
        printf("You are %d years old and %.2lf meters tall.",age,height);
        return 0;
    }

---------------- Conditional rendering ---------------->

    --------- Project 1 ----------->
    
    #include <stdio.h>
    
    int main(void) {
        int passengers;
        float gas_cost, my_cost;
    
        // Read the number of passengers and the cost of gas
        scanf("%d %f", &passengers, &gas_cost);
    
        // If there are no passengers, you pay the full gas cost
        if (passengers == 0) {
            printf("%.2f\n", gas_cost);
    
        } else {
            // Add the $1 fee and divide the total cost among all people (passengers + you)
            my_cost = (gas_cost + 1) / (passengers + 1);
            printf("%.2f\n", my_cost);
        }
    
        return 0;
    }

     --------- Project 2 ----------->

    #include <stdio.h>
    
    int main() {
        int hours_past_noon, price;
    
        // Base price
        int base_price = 10;
    
        // Read the number of hours past noon of your arrival
        scanf("%d", &hours_past_noon);
    
        // Calculate the price
        price = base_price + (hours_past_noon * 5);
    
        // If the price is more than 53 dollars, set it to 53 dollars
        if (price > 53) {
            price = 53;
        }
    
        // Print the price
        printf("%d\n", price);
    
        return 0;
    }

    --------- Project 3 ----------->

    #include <stdio.h>
    int main() {
        int die1, die2, sum, price;
    
        // Read the values of the two dice
        scanf("%d", &die1);
        scanf("%d", &die2);
    
        // Calculate the sum of the values of the two dice
        sum = die1 + die2;
    
        // Determine the tax type and price
        if (sum >= 10) {
            printf("Special tax\n");
            price = 36;
        } else {
            printf("Regular tax\n");
            price = sum * 2;
        }
    
        // Print the price
        printf("%d\n", price);
    
        return 0;
    }

    --------- Project 4 ----------->

    #include <stdio.h>
    
    int main() {
    
        // Varibales declaration
        int num_members, weight, total_weight_team1 = 0, total_weight_team2 = 0, i;
    
        // Read the number of member per team
        scanf("%d", &num_members);
    
        // Read the weights od the players alternatively per team
        for(i=0; i<num_members*2; i++){
    
            scanf("%d", &weight);
    
            if(i%2 == 0){
                total_weight_team1 += weight;
            }else{
                total_weight_team2 += weight;
            }
        }
        // Determine which team has advantage
        if(total_weight_team1 > total_weight_team2){
            printf("Team 1 has an advantage\n");
        }else{
            printf("Team 2 has an advantage\n");
        }
    
        //Print the total weight of each team
        printf("Total weight for team 1: %d\n", total_weight_team1);
        printf("Total weight for team 2: %d\n", total_weight_team2);
    
        return 0;
    }

    --------- Project 5 ----------->

    #include <stdio.h>
    
    int main() {
        int age;
        int luggage_weight;
        int price = 0;
    
        // Read the customer's age and luggage weight
        scanf("%d", &age);
        scanf("%d", &luggage_weight);
    
        // Calculate the price based on the given conditions
        if (age == 60) {
            price = 0;
        } else if (age < 10) {
            price = 5;
        } else {
            price = 30;
            if (luggage_weight > 20) {
                price += 10;
            }
        }
    
        // Print the price
        printf("%d\n", price);
    
        return 0;
    }

    --------- Project 6 ----------->

    #include <stdio.h>
    
    int main() {
    
        // Variables declaration
        int height, leaflets;
    
        // Read the height and the number of leaflets
        scanf("%d", &height);
        scanf("%d", &leaflets);
    
        // Determine the tree type based on the given condition
        if(height <= 5 && leaflets >= 8){
            printf("Tinuviel\n");
        }else if(height >= 10 && leaflets >= 10){
            printf("Calaelen\n");
        }else if(height <= 8 && leaflets <= 5){
            printf("Falarion\n");
        }else if(height >= 12 && leaflets <= 7){
            printf("Dorthonion\n");
        }else{
            printf("Uncertain\n");
        }
    
       return 0;
    }

---------------- For loop ---------------------->

    --------- Project 1 ----------->

    #int main(void) {
        int i;
        int number;
        scanf("%d", &number);
      for (i = 0; i < 11; i++){
          printf("%dx%d = %d\n", i, number, (i*number));
      }
      return 0;
    }

    --------- Project 2 ----------->

    #include <stdio.h>
    int main() {
        int i, n; // Number of robots
        int height, weight, enginePower, resistance;
        int totalPower = 0;  // Total power of all robots
        scanf("%d", &n);
        //Loop to read each robot's details and calculate its power
        for(i = 0; i < n; i++){
            scanf("%d %d %d %d", &height, &weight, &enginePower, &resistance);
            // Calculate power for the current robot and add to total power
            totalPower += (enginePower + resistance) * (weight - height);
        }
    
        // Print the total power
        printf("%d", totalPower);
        return 0;
    }

    --------- Project 3 ----------->

    int main(void) {
        int daysLeft = 25 - 23; // March 25th - March 23rd
        int minutesLeft = daysLeft * 24 * 60; // Convert days to minutes
        int secondsLeft = minutesLeft * 60; // Convert minutes to seconds
    
        printf("Dear Procrastinator,\n");
        printf("You still have to wait for %d days (%d minutes or %d seconds)
        before you can procrastinate!\n", daysLeft, minutesLeft, secondsLeft);
    
        return 0;
    }

    --------- Project 4 ----------->

    #include <stdio.h>
    int main(void) {
        //Create a variable to store an integer value
        int age;
        //Assigne a value to that variable
        age = 47;
        printf("I am %d years old.\n", age);
        printf("In %d years, I will be %d years old.\n", 8, age+8);
        printf("%d years ago, I was %d years old.\n", 11, age-11);
        return 0;
    }

    --------- Project 5 ----------->

    #include <stdio.h>
        int main(void){
        int array[3];
        int readValue = 0;
        int cellNumber = 0;
        int i = 0;
        for(i = 0 ; i < 3 ; i++){
        printf("Enter a value:");
        scanf("%d", &readValue);
        array[cellNumber] = readValue;
        printf("Cell number %d contains %d\n", cellNumber, array[cellNumber]);
        cellNumber = cellNumber + 1;
        }
        return 0;
        }


---------------- Arrays Data structures ---------------------->

    #include <stdio.h>
    int main(void) {
        int array[3]; // creates space to hold three integers
        array[0] = 18;
        array[1] = 137;
        array[2] = 8;
        printf("First element is %d.\n", array[0]);
        printf("Second element is %d.\n", array[1]);
        printf("Third element is %d.\n", array[2]);
        return 0;
    }
 
     ---- Project 1 ---->

    #include <stdio.h>
        int main(void){
        int array[3];
        int readValue = 0;
        int cellNumber = 0;
        int i = 0;
        for(i = 0 ; i < 3 ; i++){
        printf("Enter a value:");
        scanf("%d", &readValue);
        array[cellNumber] = readValue;
        printf("Cell number %d contains %d\n", cellNumber, array[cellNumber]);
        cellNumber = cellNumber + 1;
        }
        return 0;
        }
    
    ---- Project 2 ---->
   
    int main() {
    int ingredients[10];
    int i, ingredientID;

    // Reading the 10 ingredient quantities
    printf("Enter quantities for the 10 ingredients: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &ingredients[i]);
    }

    // Reading the ingredient ID number
    printf("Enter ingredient's ID number (between 0 and 9): ");
    scanf("%d", &ingredientID);

    // Error check
    if (ingredientID < 0 || ingredientID > 9) {
        printf("Invalid ID number!\n");
        return 1; // Exit with an error code
    }

    // Output the corresponding quantity
    printf("Quantity for ingredient with ID %d: %d\n", ingredientID, ingredients[ingredientID]);
    
    return 0;
    }

    ---- Project 3 ---->

    #include <stdio.h>
    int main(void){
    double array[3];
    double readValue = 0.0;
    int cellNumber = 0;
    int i = 0;
    for(i=0;i<3;i++){
    printf("Enter a decimal value:");
    scanf("%lf",&readValue);
    array[cellNumber] = readValue;
    printf("Cell number %d contains %.2lf\n", cellNumber, array[cellNumber]);
    cellNumber = cellNumber + 1;
    }
    return 0;
    }

    ---- Project 4 ---->
    
    #include <stdio.h>
    int main() {
    int n;
    double weights[50];
    double totalWeight = 0.0, avgWeight;
    // Reading the number of boxcars
    scanf("%d", &n);
    // Reading the weights of the boxcars and calculating the total weight
    for (int i = 0; i < n; i++) {
        scanf("%lf", &weights[i]);
        totalWeight += weights[i];
    }
    // Calculating the average weight
    avgWeight = totalWeight / n;

    // Printing the difference between average weight and each boxcar's weight
    for (int i = 0; i < n; i++) {
        printf("%.1lf\n", avgWeight - weights[i]);
    }

    return 0;
    }

    ---- Project 5 ---->

    #include <stdio.h>
    
    int main() {
    int n;
    double weights[50];
    double totalWeight = 0.0, avgWeight;
    
        // Reading the number of boxcars
        scanf("%d", &n);
    
        // Reading the weights of the boxcars and calculating the total weight
        for (int i = 0; i < n; i++) {
            scanf("%lf", &weights[i]);
            totalWeight += weights[i];
        }
    
        // Calculating the average weight
        avgWeight = totalWeight / n;
    
        // Printing the difference between average weight and each boxcar's weight
        for (int i = 0; i < n; i++) {
            printf("%.1lf\n", avgWeight - weights[i]);
        }
    
        return 0;
    }
 
    ---- Project 6 ---->    

    #include <stdio.h>
    int main(void) {
        //! showArray(ages, cursors=[i])
        int ages[10];
        int i;
        int ageMax = 0;
        for (i=0; i<10; i++) {
        scanf("%d", &ages[i]);
        if (ages[i] > ageMax) {
        ageMax = ages[i];
        }
        }
        printf("The maximum age is %d.\n", ageMax);
        printf("Age differences with the eldest person:\n");
        for(i=0;i<10;i++){
        printf("%d:%d ", ages[i],ageMax-ages[i]);
        }
        return 0;
    }

    ---- Project 7 ---->  

    #include <stdio.h>
    int main() {
    int n;
    double prices[10], weights[10];
    double totalCost = 0.0;
    
        // Reading the number of ingredients
        scanf("%d", &n);
    
        // Reading the price per pound for each ingredient
        for (int i = 0; i < n; i++) {
            scanf("%lf", &prices[i]);
        }
    
        // Reading the weight necessary for the recipe for each ingredient
        for (int i = 0; i < n; i++) {
            scanf("%lf", &weights[i]);
        }
    
        // Calculating the total cost
        for (int i = 0; i < n; i++) {
            totalCost += prices[i] * weights[i];
        }
    
        // Displaying the result with 6 decimal places
        printf("%.6lf\n", totalCost);
    
        return 0;
    }

---------------- Nest if and for  ---------------------->

    ---- Project 1 ---->
   
    #include <stdio.h>
    int main(void){
        int target;
        int i;
        printf("Please enter a target number: ");
        scanf("%d", &target);
        if (target >= 0){
            for (i=0; i<target; i++){
               if (i%2){
                   printf("%d ", i);
               }
           }
        }
        else{
           printf("Nothing to do!\n");
        }

        return 0;
    }

    ---- Project 2 ---->

    int main() {
    int n, count = 0;
    int population;
    
        // Reading the number of cities
        scanf("%d", &n);
    
        // Looping through the cities and counting those with populations > 10,000
        for (int i = 0; i < n; i++) {
            scanf("%d", &population);
            if (population > 10000) {
                count++;
            }
        }
    
        // Printing the result
        printf("%d\n", count);
    
        return 0;
    }

    ---- Project 3 ---->

    #include <stdio.h>
    int main(void){
        int nbThrows = 0;
        int nbDice = 0;
        int diceValue = 0;
        int throwSum = 0;
        int throw = 0;
        int dice = 0;
        scanf("%d %d", &nbThrows, &nbDice);
        for(throw = 0; throw<nbThrows; throw++){
        for(dice = 0; dice<nbDice; dice++){
        scanf("%d", &diceValue);
        throwSum = throwSum + diceValue;
        }
        printf("throw %d sum equals %d\n", throw, throwSum);
        throwSum = 0;
        }
     return 0;
    }

    ---- Project 4 ---->    

    #include <stdio.h>
    int main() {
    int n;
    
        // Reading the integer n
        scanf("%d", &n);
    
        // Printing the square of asterisks
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("*");
            }
            printf("\n");
        }
    
        return 0;
    }


---------------- While loop ---------------------->

     ---- Project 1 ---->

    #include <stdio.h>
        int main(void) {
        int diceValue;
        int notSix;
        scanf("%d", &diceValue);
        notSix = diceValue != 6;
        while (notSix) {
        scanf("%d", &diceValue);
        notSix = diceValue != 6;
        }
    return 0;
    }

    ---- Project 2 ---->

    #include <stdio.h>
        int main(void) {
        int diceValue = 0;
        int nbThrows = 0;
        scanf("%d", &diceValue);
        while(diceValue != 6){
        scanf("%d", &diceValue);
        nbThrows = nbThrows + 1;
        }
        printf("We needed %d throws to get the value 6\n", nbThrows+1);
    return 0;
    }

    ---- Project 3 ---->    

    # Here -1 is the condition to stop the loop
    #include <stdio.h>
    int main() {
    int num, sum = 0;
    
        // Keep reading until -1 is encountered
        while (1) {
            scanf("%d", &num);
        
            if (num == -1) {
                break;
            }
            sum += num;
        }
    
        // Print the result
        printf("%d\n", sum);
    
        return 0;
    }
            
    ---- Project 4 ---->

    #include <stdio.h>
    int main(void) {
        int signaturesNeeded = 1000;
        int day = 0;
        int newSignatures = 3;
        int totalSignatures = 3;
        while (totalSignatures < 1000) {
        day++;
        newSignatures = 2*newSignatures;
        printf("Day %d: %d new signatures! ", day, newSignatures);
        totalSignatures = totalSignatures + newSignatures;
        printf("Total: %d\n", totalSignatures);
        }
    return 0;
    }

    ---- Project 5 ---->

    #include <stdio.h>
    #include <stdio.h>
    int main() {
    int population;
    int day = 0;
    int total_infected = 0;
    int new_infected = 1;
    
        // Read the population
        scanf("%d", &population);
    
        // Simulate the spread of the epidemic
        while (total_infected < population) {
            total_infected += new_infected;
            new_infected = total_infected * 2;  // each infected person contaminates two new people
            day++;
        }
    
        // Print the result
        printf("%d\n", day);
    
        return 0;
    }

    ---- Project 6 ---->

    #include <stdio.h>
    int main() {
    int secret_number, guess;
    int tries = 0;
    
        // Read the secret number
        scanf("%d", &secret_number);
    
        // Keep reading guesses until the correct number is guessed
        while (1) {
            scanf("%d", &guess);
            tries++;
    
            if (guess < secret_number) {
                printf("it is more\n");
            } else if (guess > secret_number) {
                printf("it is less\n");
            } else {
                printf("Number of tries needed:\n%d\n", tries);
                break;
            }
        }
    
        return 0;
    }


    --------- project 7 ----------->

    #include <stdio.h>
    int main() {
    int min_temp, max_temp, temp;
    
        // Read the minimum and maximum safe temperatures
        scanf("%d %d", &min_temp, &max_temp);
        while (1) {
            // Read the temperature
            scanf("%d", &temp);
    
            // Check if the temperature reading is complete
            if (temp == -999) {
                break;
            }
            // Check if the temperature is within the safe range
            if (temp >= min_temp && temp <= max_temp) {
                printf("Nothing to report\n");
            } else {
                printf("Alert!\n");
                break;
            }
        }
        return 0;
    }

---------------- Print a read sting as an arrays ---------------------->

    -------- Project 1 -------->
    #include <stdio.h>
        int main(void) {
        //! showArray(word, cursors[i])
        char word[51]; //arrray of characters (string)
        printf("Please enter a word with 50 letters: ");
        scanf("%s", word);
        printf("The word read is: %s.\n", word);
        printf("The characters are: <%c> <%c> <%c> <%c>\n", word[0], word[1], word[2], word[3]);
        word[1] = 'a';
        printf("The new word is %s\n", word);
        return 0;
    }


    -------- Project 2 -------->

    #include <stdio.h>
    #include <string.h>
    int main() {
    // Variables
    int i, repetitions;
    char word[101];
    // Read the number of repetitions and the word
    scanf("%d %s", &repetitions, word);
         if(strlen(word) > 100) {
             printf("The word is too long\n");
             return 0;
         }
         for( i = 0; i < repetitions; i++ ) {
             printf("%s\n", word);
         }
        return 0;
    }
 
    -------- Project 3 -------->

    #include <stdio.h>
        int main(void) {
        //! word1 = showArray(word1, cursors=[i], width=0.5)
        //! word2 = showArray(word2, cursors=[i], width=0.5)
        char word1[5];
        char word2[8];
        scanf("%s %s", word1, word2);
        word1[3] = '\0';            // Take verything up to the 3rd character
        word2[2] = '\0';            // Take verything up to the 2nd character
        printf("%s %s\n", word1, word2);
        return 0;
    }


    -------- Project 4 -------->

    #include <stdio.h>
    int main() {
    // Variables declaration
    int i, number_of_name;
    
        // Read the number of names
        scanf("%d", &number_of_name);
    
        for (i = 0; i < number_of_name; i++) {
            char firstName[101];
            char lastName[101];
    
            // Read the first name and last name
            scanf("%s %s", firstName, lastName);
    
            // Print the name in correct order with a newline character
            printf("%s %s\n", lastName, firstName);
        }
    
        return 0;
    }

    -------- Project 5 -------->

    #include <stdio.h>
        int main(void) {
        //! showArray(word, cursors=[i])
        char word[30];
        int i = 0;
        printf("Please enter a word: ");
        scanf("%s", word);
        while (word[i]!='\0')
        i++;
        printf("%s has word length %d.\n", word, i);
        return 0;
    }


    -------- Project 6 -------->

    #include <stdio.h>
    #include <string.h>
    
    int main() {
    char name[51]; // Assuming names are less than 50 characters
    
        // Read the fan's name
        scanf("%s", name);
        
        // Calculate the length of the name
        int nameLength = strlen(name);
        
        // Determine whether the name has an even or odd number of letters
        int line = (nameLength % 2 == 0) ? 1 : 2;
        
        // Output the line number
        printf("%d\n", line);
        
        return 0;
    }

    -------- Project 7 -------->

    #include <stdio.h>
    int main(void) {
        //! showArray(word, cursors=[i])
        char word[51];
        int i = 0;
        scanf("%s", word);
        while (word[i]!='\0')
        i++;
        if (i % 2 == 0)
        printf("1\n");
        else
        printf("2\n");
    return 0;
    }

    ------- Finding the frequency of word length in a string -------->

    #include <stdio.h>
        int main(void) {
        //! showArray(word, cursors=[t])
        //! showArray(length, cursors=[i])
        int i = 0;
        int t = 0;
        int l = 0;
        int j = 0;
        int nbWords = 0;
        char word[11];
        int length[10];//length[5] number of 5-letter-long words in the text
        for(i=0;i<10;i++){
        length[i]=0;
        }
        scanf("%d", &nbWords);
        for(t=0;t<nbWords;t++){
        scanf("%s", word);
        l = 0;
        while(word[l]!='\0'){
        l++;
        }
        length[l] = length[l] + 1;
        printf("%s %d ", word,l);
        }
        for(j=0;j<10;j++){
        printf("There are %d words with %d letters.\n", length[j], j);
        }
        return 0;   
        }
            
    ------- Finding the frequency of word length in a string -------->
  
    #include <stdio.h>
    #include <string.h>
    
    int main(){
    
        int i, n, maxLength = 0, currentLength;
        char word[101];
        
        // Get the number of word
        scanf("%d", &n);
        
        // Iterate through all the words
        for(i = 0; i < n; i++){
           scanf("%s", word);
           currentLength = strlen(word);
           if (currentLength > maxLength) {
               maxLength = currentLength;
           }
        }
        
        // Print the maximum length
        printf("%d\n", maxLength);
        return 0;
    }

    ------- Finding which words come first in the giving statement--------> 

    #include <stdio.h>
    int main(void) {
    char word1[50];
    char word2[50];
    int i = 0;
    
        printf("Please enter a word: ");
        scanf("%s", word1);
        printf("And another: ");
        scanf("%s", word2);
        // Find first letter in which words differ
        while (word1[i]!='\0' && word2[i]!= '\0' && word1[i] == word2[i]) 
            i++;
        if (word1[i] < word2[i])
            printf("%s comes before %s in the alphabet.\n", word1, word2);
        else if (word1[i]>word2[i])
            printf("%s comes after %s in the alphabet.\n", word1, word2);
        else printf("You entered the same word, %s, twice.\n", word1);
            
        return 0;
    }

    ------- Linear Search -------->

    #include <stdio.h>
    int main(void) {
    //! showArray(list, cursors=[i])
    int list[] = {6, -2, 5, 12, 7, 3, 8, 18, -10, 1};
    int n = 10;
    int item, i, found;
    
        printf("Which number are you looking for? ");
        scanf("%d", &item);
        found = 0;
        i = 0;
        while (!found && i<n) {
            if (item == list[i]) { 
                found = 1;
            } else {
                i++;
            }
        }
        
        if (!found) {
            printf("%d is not a member of this list. \n", item);
        } else {
            printf("I found %d at index %d in the list. \n", item, i);
        }
        
        return 0;
    }

    ------- Checking the letter T in a giving word  -------->

        #include <stdio.h>
        #include <string.h>
        
        int main() {
        char word[51];
        scanf("%s", word);
        
            int len = strlen(word);
            int mid = (len + 1) / 2; // This calculation ensures that the middle letter is considered in the first half for odd lengths.
        
            // Check first half
            for (int i = 0; i < mid; i++) {
                if (word[i] == 't' || word[i] == 'T') {
                    printf("1\n");
                    return 0; // End program if found
                }
            }
        
            // Check second half
            for (int i = mid; i < len; i++) {
                if (word[i] == 't' || word[i] == 'T') {
                    printf("2\n");
                    return 0; // End program if found
                }
            }
        
            // If not found in entire word
            printf("-1\n");
            return 0;
        }

    ------- Binary search  -------->

    #include<stdio.h>
    int main(void) {
    //! showArray(list, cursors=[ia, ib, mid])
    int list[] = {-10, -3, 2, 5, 8, 14, 77, 106, 759, 900}; /* sorted list */
    int n = 10;
    int item;
    int ia, ib, mid, found;
    
        printf("Which number are you looking for? ");
        scanf("%d", &item);
        ia = 0;
        ib = n-1;
        found = 0;
        
        while (!found && (ia <= ib)) {
            mid = (ia + ib)/2; // middle index
            if (item == list[mid]) {
                found = 1;  // found item!
            } else if (item<list[mid]) {
                ib = mid-1; // toss the top half
            } else {
                ia = mid + 1; // toss the bottom half
            }
        }
        
        if (!found) {
            printf("Number %d was not found in the array. \n", item);
        } else {
            printf("Number %d was found at index %d in the array.\n", item, mid);
        }
        
        return 0;
    }

    ------- Bubble sort  -------->

    #include<stdio.h>
    int main(void) {
    //! showArray(list, cursors=[i])
    // Sorting from smallest to largest
    int list[] = {759, 14, 2, 900, 106, 77, -10, 8, -3, 5}; /* unsorted list */
    int n = 10;
    int i, j;
    int swap;
    
        printf("Unsorted list: \n");
        for (i=0; i<n; i++) {
            printf("%d ", list[i]);
        }
        
        for (j=0; j<n-1; j++) {
            for (i=0; i<n-1; i++) {
                if (list[i] > list[i+1]) {
                    swap = list[i];
                    list[i] = list[i+1];
                    list[i+1] = swap;
                }
            }
        }
        
        printf("Unsorted list: \n");
        for (i=0; i<n; i++) {
            printf("%d ", list[i]);
        }
    
        return 0;
    }

    ------- Repeated letters in a word  -------->

    #include <stdio.h>
    #include <string.h>
    
    int main() {
    char word[51];
    scanf("%s", word);
    
        int len = strlen(word);
    
        // Sort the word using bubble sort
        for (int i = 0; i < len - 1; i++) {
            for (int j = i + 1; j < len; j++) {
                if (word[i] > word[j]) {
                    char temp = word[i];
                    word[i] = word[j];
                    word[j] = temp;
                }
            }
        }
    
        int count = 0;
        for (int i = 0; i < len - 1; i++) {
            if (word[i] == word[i + 1]) {
                count++;
                // Skip other occurrences of the same letter
                while (i < len - 1 && word[i] == word[i + 1]) {
                    i++;
                }
            }
        }
    
        printf("%d\n", count);
        return 0;
    }
    


