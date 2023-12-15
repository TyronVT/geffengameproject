/******************************************************************
This is to certify that this project is my own work, based on my personal efforts in studying and applying the concepts learned. I have constructed the functions and their respective algorithms
and corresponding code by myself. The program was run, tested, and debugged by my own efforts. I further certify that I have not copied in part or whole or otherwise plagiarized the work of other students and/or persons.
<your full name>, DLSU ID# <number>
******************************************************************/

/*
	Description: This program is the sum of all my knowledge in this course. It is a game that is an 
	adventure to craft Ymir's Avatar Potion. Using the Magical Fishing Rod that was given to us, we will
	hunt different kinds of fish and use them as materials for Ymir's Avatar Potion.
	Programmed by: <your name here> <section>
	Last Modified: ikaw na bahala d2
	Acknowledgements: https://stackoverflow.com/questions/17846212/generate-a-random-number-between-1-and-10-in-c
	Version: 4
*/

#include <stdio.h> /*stdio.h = standard input ouput*/
#include <string.h>
#include <stdlib.h> 
#include <time.h>

/* This function will display the location to which the player can teleport too. It will also
allow the player to view the current items in the bag.

@return void
*/
void
display_menu()
{
	printf("Teleport to a location:\n");
	printf("[0] Geffen\n[1] Holgrehenn Store\n[2] Taal Lake\n[3] Galathea Deep\n[4] Dagupan Mangrove Forest\n[5] Mindanao Current\n\n");

	printf("[B] Check bag\n");
	printf("[X] Exit\n");
}

/* This function will display the items in the bag until a specified index.
@param bag_amount[] parameter holds all the amount of items that the player has in an array.
@param item_name_array[] parameter holds all the names of the items in the game.
@param limit is until which which index the for loop will output the contents of the bag.
@return an arbitrary number greater than 0 if the bag has found anything.
*/
int 
view_bag(int	bag_amount[],
		char	item_name_array[][50],
		int		limit)
{
	printf("CURRENT ITEMS IN BAG\n");
	int i = 0;
	int not_empty = 0;

	// flag -> not_empty
	// loop control variable -> i
	// Output only until the limit
	/* i < limit */
	/* int X[5] = {1,2,3,4,5}
				   0 1 2 3 4
				   X[3]
	*/


	/* bag_amount[0] != 0
	not_empty++; ===  not_empty = not_empty + 1;
	not_empty + 1 
	int x = 4;
	x++;
	4 + 1 = 5
	x = 5;	
	*/ 
	/*index 0 = potion
	index 1 = gold
	index 2 = magic bait*/
					/*      v*/
	/*bag_amount[] = {5,0,0,5};*/
	/*printf(bag_amount[i=3]);*/

	while(i < limit) {	
		/*if i'th index is not 0*/
		if (bag_amount[i] != 0)
		{
			not_empty++;
			printf("[%d]:\t%s", i ,item_name_array[i]);
			printf(" - ");
			printf("%d\n", bag_amount[i]);
		}
		i++;
	}
	return not_empty;
}

/* This function will initialize all the items in the game in an array with their corresponding indexes.
@param item_name_array is the array that will hold all the items in the game with a corresponding index
for easier navigation and access. The items and their indexes are the following:
[0]	- Scaleless Blackfish
[1]	- Tilapia
[2]	- Mariana Snailfish
[3]	- Sardines
[4]	- Mudskippers
[5]	- Bangus
[6]	- Hillstream Loaches
[7]	- Tuna
[8]	- Gold
[9]	- Majestic Water
[10] - Wondrous Vinegar
[11] - Magical Bait 11
[12] - Fire Chakra Potion
[13] - Water Chakra Potion
[14] - Earth Chakra Potion
[15] - Air Chakra Potion
[16] - Ymir Avatar Potion

@return void
*/
void 
initialize_bag(char item_name_array[][50])
{
	strcpy(item_name_array[0], "Scaleless Blackfish");
	strcpy(item_name_array[1], "Tilapia");
	strcpy(item_name_array[2], "Mariana Snailfish");
	strcpy(item_name_array[3], "Sardines");
	strcpy(item_name_array[4], "Mudskippers");
	strcpy(item_name_array[5], "Bangus");
	strcpy(item_name_array[6], "Hillstream Loaches");
	strcpy(item_name_array[7], "Tuna");
	strcpy(item_name_array[8], "Gold");
	strcpy(item_name_array[9], "Majestic Water");
	strcpy(item_name_array[10], "Wondrous Vinegar");
	strcpy(item_name_array[11], "Magical Bait");
	strcpy(item_name_array[12], "Fire Chakra Potion");
	strcpy(item_name_array[13], "Water Chakra Potion");
	strcpy(item_name_array[14], "Earth Chakra Potion");
	strcpy(item_name_array[15], "Air Chakra Potion");
	strcpy(item_name_array[16], "Ymir's Avatar Potion");
}

/*This function will display the current location of the player. Each location on the map has it's corresponding number.
[0] -  Geffen
[1] -  Holgrehenn Store
[2] -  Taal Lake
[3] -  Galathea Deep
[4] -  Dagupan Mangrove Forest
[5] -  Mindanao Current
@return void
*/
void
display_location(int location)
{
	printf("Current Location: ");
	switch (location) {
	case 0:
		printf("Geffen\n\n");
		break;
	case 1:
		printf("Holgrehenn Store\n\n");
		break;
	case 2:
		printf("Taal Lake\n\n");
		break;
	case 3:
		printf("Galathea Deep\n\n");
		break;
	case 4:
		printf("Dagupan Mangrove Forest\n\n");
		break;
	case 5:
		printf("Mindanao Current\n\n");
		break;
	}
}

		// Geffen Functions, this will contain all the functions used in Geffen area. //

/*This function is used to display all the materials needed to craft the potion the player has chosen.
Each potion has it's own number.
[1] - Fire Chakra Potion
[2] - Water Chakra Potion
[3] - Earth Chakra Potion
[4] - Air Chakra Potion
[5] - Ymir's Avatar Potion

@param potion_no is the potion number.
@return void
*/
void 
display_pot_mats(int potion_no)
{
	// Output materials needed based on the potion_no variable.
	switch (potion_no) {	
	case 0: // Back
		break;
	case 1: // Fire Charka Potion Materials
		printf("Scaleless Blackfish - Taal Lake\n");
		printf("Gold - Holgrehenn Store\n");
		printf("Majestic Water - Holgrehenn Store\n");
		printf("Wondrous Vinegar - Holgrehenn Store\n");
		break;
	case 2: // Water Charka Potion Materials
		printf("Mariana Snailfish - Galathea Deep\n");
		printf("Gold - Holgrehenn Store\n");
		printf("Majestic Water - Holgrehenn Store\n");
		printf("Wondrous Vinegar - Holgrehenn Store\n");
		break;
	case 3: // Earth Charka Potion Materials
		printf("Mudskippers - Dagupan Mangrove Forests\n");
		printf("Gold - Holgrehenn Store\n");
		printf("Majestic Water - Holgrehenn Store\n");
		printf("Wondrous Vinegar - Holgrehenn Store\n");
		break;
	case 4: // Air Charka Potion Materials
		printf("Hillstream Loaches - Mindanao Current\n");
		printf("Gold - Holgrehenn Store\n");
		printf("Majestic Water - Holgrehenn Store\n");
		printf("Wondrous Vinegar - Holgrehenn Store\n");
		break;
	case 5: // Ymir's Avatar Potion
		printf("Fire Chakra Potion\nWater Chakra Potion\nEarth Chakra Potion\nAir Chakra Potion\n");
		break;
	default:
		break;
	}
}

/*This function will craft the chosen potion of the player it will if the input is one of the potion numbers
and check if the player has enough materials. If the player has enough materials, it will deduct the needed
items from the bag, and add the newly crafted potion to the bag.
@param bag_amount[] is for accessing the bag of the player.
@param potion_no is for the potion's identification
return 1 if it's successful, return 0 if not (the player has insufficient materials).
*/
int 
craft_chosen_pot(int	bag_amount[],	
			     int	potion_no)
{
	/*The default value -1 means there was no success, it will be modified if potion crafting is successful.*/
	// flag
	int success = -1;
	// Check all materials for Fire Chakra Potion
	if (potion_no == 1) {
		if (bag_amount[0] > 0 && bag_amount[8] > 0 && bag_amount[9] > 0 && bag_amount[10] > 0) {		
			bag_amount[12]++;
			bag_amount[0]--;
			bag_amount[8]--;
			bag_amount[9]--;
			bag_amount[10]--;
			success = 1;
		}
	}
	// Check all materials for Water Chakra Potion
	else if (potion_no == 2) {	
		if (bag_amount[2] > 0 && bag_amount[8] > 0 && bag_amount[9] > 0 && bag_amount[10] > 0) {		
			bag_amount[13]++;
			bag_amount[2]--;
			bag_amount[8]--;
			bag_amount[9]--;
			bag_amount[10]--;
			success = 1;
		}
	}
	// Check all materials for Earth Chakra Potion
	else if (potion_no == 3) {	
		if (bag_amount[4] > 0 && bag_amount[8] > 0 && bag_amount[9] > 0 && bag_amount[10] > 0) {		
			bag_amount[14]++;
			bag_amount[4]--;
			bag_amount[8]--;
			bag_amount[9]--;
			bag_amount[10]--;
			success = 1;
		}
	}
	// Check all materials for Air Chakra Potion
	else if (potion_no == 4) {	
		if (bag_amount[6] > 0 && bag_amount[8] > 0 && bag_amount[9] > 0 && bag_amount[10] > 0) {		
			bag_amount[15]++;
			bag_amount[6]--;
			bag_amount[8]--;
			bag_amount[9]--;
			bag_amount[10]--;
			success = 1;
		}
	}
	// Check all materials for Ymir Avatar Potion
	else if (potion_no == 5) {	
		if (bag_amount[12] > 0 && bag_amount[13] > 0 && bag_amount[14] > 0 && bag_amount[15] > 0) {		
			bag_amount[16]++;
			bag_amount[15]--;
			bag_amount[14]--;
			bag_amount[13]--;
			bag_amount[12]--;
			success = 1;
		}
	}
	else 
		printf("Not a valid potion.\n");

	// Check flag if != -1
	if (success != -1)
		printf("Potion successfully crafted. ");	
	else 
		printf("Potion crafting unsuccessful, you do not have sufficient materials.\n");
	system("PAUSE");

	return success;
}

/* 

craft_potion()
if(craft_potion() == 1)
	//code */



/*This function will display the potions that can be crafted in the game.
@return void */
void 
potion_menu() 
{
	printf("What potion would you like to craft?\n");
	printf("[1] Fire Chakra Potion\n[2] Water Chakra Potion\n[3] Earth Chakra Potion\n[4] Air Chakra Potion\n[5] Ymir's Avatar Potion\n[B] Back\n");
}

/*This function is used to do the crafting procedure. 
@param bag_amount[] will be used to access the current amount of items the player has.
@return void
*/
void 
craft_potions(int bag_amount[])
{
	char proceed_crafting;
	int continue_using = 1;
	int continue_crafting = 1;
	int valid_proceed_crafting = 0;
	
	system("cls");
	// For the crafting loop, will be asked each time until the user decides to exit.
	/*loop control variable -> continue_crafting == 1*/

	while (continue_crafting == 1) {	
		char choice;
		char user_input[50];
		char proceed_crafting_input[50];
		
		// flag to check proceed crafting input

		valid_proceed_crafting = 0;
		potion_menu();
		printf("Enter choice: ");

		scanf("%s", user_input);

		while (strlen(user_input) > 1) {
			system("cls");
			potion_menu();
			printf("Unrecognized Input. Try again: ");
			scanf("%s", user_input);
		}
		// Convert char to int if it's a digit.
		if (isdigit(user_input[0])) 
			choice = atoi(&user_input[0]);
		// If not, convert to uppercase to reduce errors handling.
		else 
			choice = toupper(user_input[0]);	

		/*If the choice is greater than 0, we ask the user if they want to proceed crafting the potion. 
		This will only run if the conditional statement isdigit(choice) is met.*/
		if (choice > 0 && choice < 6) {
			printf("\nMaterials Needed:\n");
			/* display_pot_mats(int potion_no)*/
			display_pot_mats(choice);			

			while (valid_proceed_crafting == 0) {
				printf("\nProceed crafting this potion? (0/1): ");
				scanf("%s", proceed_crafting_input);

				while (strlen(proceed_crafting_input) > 1)
				{
					system("cls");
					potion_menu();
					printf("Enter choice: %d\n", choice);
					printf("\nMaterials Needed:\n");
					display_pot_mats(choice);
					printf("\nUnrecognized Input. Try again.\n");
					printf("Proceed crafting? (0/1): ");
					scanf("%s", proceed_crafting_input);
				}
				proceed_crafting = proceed_crafting_input[0];

				switch (proceed_crafting) {
				case '1':
					craft_chosen_pot(bag_amount, choice);
					valid_proceed_crafting = 1;
					break;

				case '0':
					valid_proceed_crafting = 1;
					break;

				default:
					printf("Invalid choice. Try again.\n");
				}

			}
		}
		/*If the choice is equal to the 'B' character, meaning it is a back, we modify
		the loop control variables to exit out of the loop.*/
		else if (choice == 'B')
			continue_crafting = -1;
		/* If the user entered anything besides the numbers 0-5, the program will tell the user it's an invalid
		choice.*/
		else {
			printf("Invalid potion. ");
			system("PAUSE");
		}
		// Clear the screen
		system("cls");
	}
}

/*This function will simply print out the actions we can do in Geffen.
@return void
*/
void 
geffen_choices()
{
	system("cls");
	display_location(0);
	printf("\n");
	printf("[1] Craft Potions\n[2] Teleport\n");
}

/*This function will be used to display the menu for Geffen and execute anything the player can do
in Geffen.
@param bag_amount[] is used to for accessing the amount of items the player has.
@return void
*/
void 
geffen_menu(int bag_amount[])
{
	char choice;
	char user_input[50];
	int continue_using = 1;
	while (continue_using == 1) {
		geffen_choices();
		printf("Enter your choice: ");
		scanf("%s", user_input);

		/*If the user keeps entering inputs more than 1 character, the input is automatically disregarded and the user
		is asked to try again.*/
		while (strlen(user_input) > 1) {
			geffen_choices();
			printf("Unrecognized Input. Try again: ");
			scanf("%s", user_input);
		}

		/*If the user was successful in entering one character only, the first character of the user_input array is
		taken as the choice. It is also made to an uppercase to make handling of errors easier.*/
		choice = toupper(user_input[0]);

		switch (choice) {		
		case '1': // Choose to craft potions
			system("cls");
			craft_potions(bag_amount);
			break;
		case '2': // Return to list of locations
			continue_using = 0;
			break;
		default:
			system("cls");
			printf("Invalid choice. Try again.\n\n");
			break;
		}
	}
}
		// Holgrehenn Store Functions //

/*This function will be used to display all the items available in Hologrehenn's store.
@param none
@return void
*/
void 
display_items()
{
	printf("ITEM\t\t\tPrice\n");
	printf("[1] Gold\t\t750 Ymir\n");
	printf("[2] Majestic Water\t100Ymir\n");
	printf("[3] Wondrous Vinegar\t150Ymir\n");
	printf("[4] Magical Bait\t300Ymir\n");
	printf("[B] Back\n");
}

/*This function will check if a purchase can be made.
Precondition: All values are positive.
@param player_ymir is the current Ymir of the player.
@param bag_amount[] is the current bag of the player, which holds all the quantites of the items he has.
@param index will be the index of the item in the bag_amount[] array to which the program will add.
@param total_cost is the product of the item cost and amount.
@param amount is the amount of the item the player wants to buy.
@return the total Ymir that will be deducted from the player.
*/
int 
purchase_item(int	player_ymir, 
			 int	bag_amount[], 
			 int	index, 
			 int	total_cost, 
			 int	amount)
{
	/*Set the default subtracted Ymir to 0, as this will be the Ymir subtracted from the user if the purchase is not
	valid.*/
	int ymir_subtracted = 0;
	/*If the player does not have the sufficient Ymir the function will tell the user.*/
	if (player_ymir < total_cost) {	
		printf("You do not have enough Ymir to buy this! ");
		system("PAUSE");
	}
	/*If they have enough Ymir, the item will be added to the bag. The quantity of the item added will be
	equal to the variable "amount". It will return the Ymir that will be subtracted from the user.*/
	else {
		bag_amount[index] += amount;
		ymir_subtracted = total_cost;
	}
	return ymir_subtracted;
}

/*This function is for calculating the total expenses of the player
Precondition: All values are positive.
@param player_ymir is the current Ymir the player has, this will be needed to know if we can buy
an item or not
@param bag_amount[] is the total amount of items a player has, will be used to add items if the player
buys.
@return the total expenses of the player.
*/
int 
buy_items(int	player_ymir, 
		 int	bag_amount[])
{
	char choice;
	char user_input[50];
	int continueBuying = 1;
	int continue_using = 1;
	/*This loop will continue to execute unless the loop control variable "continueBuying"
	is modified.*/
	while (continueBuying == 1) {	
		int amount = 0;
		int price = 0;
		int total_cost = 0;

		system("cls");
		printf("\nWhat would you like to buy?   Current Ymir: %d", player_ymir);
		printf("\n\n");
		display_items();

		printf("Enter your choice: ");
		scanf("%s", user_input);

		/*If the user keeps entering inputs more than 1 character, the input is automatically disregarded and the user
		is asked to try again.*/
		while (strlen(user_input) > 1) {
			system("cls");
			printf("\nWhat would you like to buy?   Current Ymir: %d", player_ymir);
			printf("\n\n");
			display_items();
			printf("Unrecognized Input. Try again: ");
			scanf("%s", user_input);
		}

		/*If the user was successful in entering one character only, the first character of the user_input array is
		taken as the choice. It is also made to an uppercase to make handling of errors easier.*/
		choice = toupper(user_input[0]);
		// Compare the choices
		// Get the total Ymir needed by multiplying the price with the amount inputted by the user.
		switch (choice) {		
		case 'B': // Back
			continueBuying = 0;
			break;

		case '1': // Gold - 750 Ymir
			printf("Enter the amount: ");
			scanf("%d", &amount);
			price = 750;
			total_cost = price * amount;
			player_ymir -= purchase_item(player_ymir, bag_amount, 8, total_cost, amount);
			break;

		case '2': // Majestic Water - 100 Ymir
			printf("Enter the amount: ");
			scanf("%d", &amount);
			price = 100;
			total_cost = price * amount;
			player_ymir -= purchase_item(player_ymir, bag_amount, 9, total_cost, amount);
			break;

		case '3': // Wondrous Vinegar - 150 Ymir
			printf("Enter the amount: ");
			scanf("%d", &amount);
			price = 150;
			total_cost = price * amount;
			player_ymir -= purchase_item(player_ymir, bag_amount, 10, total_cost, amount);
			break;

		case '4': // Magical Bait - 300 Ymir
			printf("Enter the amount: ");
			scanf("%d", &amount);
			price = 300;
			total_cost = price * amount;
			player_ymir -= purchase_item(player_ymir, bag_amount, 11, total_cost, amount);
			break;

		default:
			system("cls");
			printf("\nWhat would you like to buy?   Current Ymir: %d", player_ymir);
			printf("\n\n");
			display_items();
			printf("Invalid choice. ");
			system("pause");
			break;
		}
	}
	return player_ymir;
}

/*This function is for calculating the total amount of Ymir the player will receive after selling.
Precondition: All values are positive.
@param player_ymir is the total Ymir our player has.
@param bag_amount[] will be used to deduct from the player's bag the items he will sell.
@param item_name_array[][50] will be used for displaying the item names. It is also needed for the
view_bag function which will be called here.
@return the total amount of Ymir the player will receive.
*/
int 
sell_items(int	player_ymir, 
		  int	bag_amount[], 
		  char	item_name_array[][50])
{
	/*Output the item_name_array until at index 7 only. Index 0-7 contains all the items that can be sold in the shop.*/
	int bagSize = 7;
	char user_input[50];
	int continueSelling = 1;

	printf("\n");	
	while (continueSelling == 1) {	
		system("cls");
		printf("What item would you like to sell?\tCurrent Ymir: %d\n", player_ymir);
		
		/*If the view_bag functions returns anything greater than 0, the bag is not empty, hence we proceed with giving the
		user a choice what item to sell, also a back option.*/
		if (view_bag(bag_amount, item_name_array, bagSize) > 0) {		
			int amount = 0;
			char choice;

			printf("[B]\tBack\n");
			printf("Enter your choice: ");
			scanf("%s", user_input);

			while (strlen(user_input) > 1) {
				printf("Unrecognized Input. Try again: ");
				scanf("%s", user_input);
			}
			choice = user_input[0];

			// Convert char to int if it's a digit. The blocks inside the if statement will only run if the input is a digit.
			if (isdigit(choice)) {
				choice = atoi(&choice);
				
				/*If the user does not decide to go back and the item they chose is available in the bag.*/

				if (bag_amount[choice] != 0 && choice < 7) {
					printf("Amount: ");
					scanf("%d", &amount);
					if (amount > bag_amount[choice]) {
						printf("You do not have enough of this item to sell. ");
						system("pause");
					}
					else {
						bag_amount[choice] -= amount;
						// Rare Fishes
						if (choice == 0 || choice == 2 || choice == 4 || choice == 6)
							player_ymir += 1000 * amount;
						// Tilapia
						else if (choice == 1)
							player_ymir += 35 * amount;
						// Sardines
						else if (choice == 3)
							player_ymir += 40 * amount;
						// Bangus
						else if (choice == 5)
							player_ymir += 50 * amount;
						//Tuna
						else if (choice == 7)
							player_ymir += 45 * amount;
					}
				}
				/*If the user enters an item which is not in their bag.*/
				else if (bag_amount[choice] < 1) {
					printf("You do not have this item. ");
					system("PAUSE");
				}
				/*If the user enters a completely invalid item. (Out of range)*/
				else {
					printf("Invalid item. ");
					system("PAUSE");
				}
			}
			// If not, convert to uppercase to reduce error handling.
			else {
				choice = toupper(choice);
				/*If the user decides to go back.*/
				 if (choice == 'B')
					continueSelling = 0;
				 else {
					 printf("Invalid input. ");
					 system("pause");
				 }
			}			
		}
		/*If the return is not greater than 0, tell the user their bag is empty and exit out of the menu.*/
		else {		
			printf("No available items for selling. ");
			system("pause");
			continueSelling = 0;
		}
	}
	return player_ymir;
}

/*This function is used to display the menu for Holgrehenn's Store. It will also be used as the 
main navigation function for Holgrehenn's Store, which will allow the player to buy, sell, or go back.
@param none
@return void
*/
void 
holgrehenn_menu()
{
	display_location(1);
	printf("Welcome to the Holgrehenn Store! How may I help you?\n");
	printf("[1] Buy Items\n[2] Sell Items\n[B] Back\n");
}

		// Fishing Functions // 

/*The probability of catching a rare fish is 10%, and the probability of catching a common fish is 
90%. This function will generate a random number from 1 to 10, if it falls between 1-9 (90% of getting
1-9), we know that we caught a common fish. However, if the generated number is 10, (10% of getting 10),
we know we caught a rare fish. 
Using the magical bait, the interval for catching a rare fish is now [8,10], instead of 10 only. 
Therefore, the interval for catching a common fish is now [1,7].

@param bait_choice is the parameter that will determine the catch rate, whether the probabilities
are 90% common fish and 10% rare fish, or 30% rare fish and 70% common fish.
*/
int 
is_success_rare_fish(int bait_choice)
{
	/*Generate a seed for a random number*/
	srand(time(NULL));
	/*Generate a random number such that it's on the interval [1,10].*/
	int pval = rand() % 10 + 1;
	int rareCatched = 0;
	/*If the magic bait is equipped, the probability will be modified to 30% rare fish and 70% common fish.*/
	if (bait_choice == 1) {	
		if (pval > 0 && pval <= 7)
			rareCatched = 0;
		else
			rareCatched = 1;
	}
	/*No magic bait, probability is 10% rare fish 90% common fish*/
	else {	
		if (pval > 0 && pval <= 9)
			rareCatched = 0;
		else
			rareCatched = 1;
	}
	return rareCatched;
}

/*This function will catch fish and the fish that can be caught will depend on the area. The probability
of a fish type being catched can also be modified.
@param location is the location of where this function will execute. Each location in the map has
it's corresponding number.
However, we are only interested in the locations 2 to 5.
@param bag_amount[] is used to access the amount of items in the player's bag.
@param item_name_array[][50] is used for displaying the item names
@param bait_choice is used to determine whether the player would want to use the magic bait. It is 
automatically asked if the player has a magic bait available. 
@return void
*/
void 
catch_fish(int	location, 
		  int	bag_amount[],
		  int	bait_choice)
{
	/*Run the is_success_rare_fish function and store the result in the "success" variable.*/
	int success = is_success_rare_fish(bait_choice);

	/*If success==1, we let the player know and store the newly acquired rare fish in the bag. If not, we store the common
	fish in the bag.*/
	switch (location) {	
	case 2: // Taal Lake (Scaleless BlackFish, Tilapia)
		if (success == 1) {		
			printf("You caught a Scaleless Blackfish!\n");
			bag_amount[0]++;
		}
		else {		
			printf("You caught a Tilapia...\n");
			bag_amount[1]++;
		}
		break;
	
	case 3: // Galathea Deep (Mariana Snailfish, Sardines)
		if (success == 1) {		
			printf("You caught a Mariana Snailfish!\n");
			bag_amount[2]++;
		}
		else {		
			printf("You caught sardines...\n");
			bag_amount[3]++;
		}
		break;

	case 4: 
		if (success == 1) {		
			printf("You caught a Mudskipper!\n");
			bag_amount[4]++;
		}
		else {		
			printf("You caught bangus...\n");
			bag_amount[5]++;
		}
		break;

	case 5:
		if (success == 1) {		
			printf("You caught a Hillstream Loach!\n");
			bag_amount[6]++;
		}
		else {		
			printf("You caught a tuna...\n");
			bag_amount[7]++;
		}
		break;
	}
	printf("\n");
}

/*This function will display all the actions the user can do while fishing.
@return void
*/
void 
fishing_choices(int bag_amount[])
{
	printf("Do you want to fish? Available Magic Bait: ");
	// The index of the magic bait is at index 11 in the bag_amount array.
	printf("%d", bag_amount[11]);
	printf("\n[0] Cancel\n[1] Fish\n[2] Fish with Magic Bait\n");
}

/*This function is for handling all fishing actions in locations 2,3,4, and 5. It will take advantage
of the catch_fish function.
@param location is used to determine what place is this taking place.
@param bag_amount[] is used to determine the amount of items inside the player's bag.
@return void
*/
void 
fishing_menu(int location,
			int bag_amount[])
{
	char choice;
	int continueFishing = 1;
	char user_input[50];
	/*The code below will continue to run unless the user modifies the loop control variable continueFishing.*/
	while (continueFishing == 1) {
		display_location(location);
		fishing_choices(bag_amount);
		printf("Enter your choice: ");
		scanf("%s", user_input);

		/*If the user keeps entering inputs more than 1 character, the input is automatically disregarded and the user
		is asked to try again.*/
		while (strlen(user_input) > 1) {
			 system("cls");
			 display_location(location);
			 fishing_choices(bag_amount);
			 printf("Unrecognized Input, try again: ");
			 scanf("%s", user_input);
		}
		choice = user_input[0];

		switch (choice) {
		case '1':
			system("cls");
			display_location(location);
			catch_fish(location, bag_amount, 0);
			break;

		case '2':
			system("cls");
			display_location(location);
			/* Check if magic bait is avaiable, call the catch_fish function with the third arguement equal to 1 
			to let the function know the new probabilities.*/
			if (bag_amount[11] > 0) {
				bag_amount[11]--;
				catch_fish(location, bag_amount, 1);
			}
			/*If the user chose the fish with the magic bait despite not having any, the program will let the user know
			and continue fishing without the magic bait.*/
			else {
				printf("\nYou do not have a magic bait. Fishing with no bait..\n");
				catch_fish(location, bag_amount, 0);
			}
			break;

		case '0':
			continueFishing = 0;
			break;

		default:
			printf("Invalid choice. ");
			system("pause");
			system("cls");
			break;
		}

	}
}

/*This is the entry point of the program, all user-defined functions will be used here*/
/*Entry Point*/
int main()
{
	// Main Variables
	int choice;

	// char array limit = 50
	char user_input[50];
	int continue_using = 1;
	// Initializing values at game start
	int current_ymir = 0;

	// Set all item quantities to 0.
	int bag_amount[17] = { 0 };

	// Declare array for the item na mes.
	char bagitem_name_array[17][50];
	/*2D Array [17] -> kung hanggang ilan ang pwede istore
	[50] -> kung ilang characters sa pangalan*/


	// Initialize item name array with their names at the corresponding indexes.
	initialize_bag(bagitem_name_array);

	for (int i = 0; i < 17; i++)
		bag_amount[i] = 99;


	// Holgrehenn Store Variables
	char h_choice = '0';
	int h_exit = 0;
	char h_user_input[50];

	while (continue_using == 1) {
		system("cls");
		display_menu();

		printf("Enter your choice: ");
		// %s = string
		scanf("%s", user_input);

		while (strlen(user_input) > 1) {
			// clear screen 
			 system("cls");
			 display_menu();
			 printf("Unrecognized Input, try again: ");
			 scanf("%s", user_input);
		}

		/*If the user was successful in entering one character only, the first character of the user_input array is
		taken as the choice. It is also made to an uppercase to make handling of errors easier.*/
		choice = toupper(user_input[0]);

		switch (choice)
		{
		case 'X': // user_input[0] = 'X' // Exit
			continue_using = 0; 
			break; 

		case '0': // Location Geffen 	
			// clear screen
			system("cls");
			// geffen 
			geffen_menu(bag_amount);
			break;

		case '1': // Location Holgrehenn Store	
			// loop control variable of holgrehenn
			h_exit = 0;
			// while not 1
			/* == -> equal , != not equal*/

			while (h_exit != 1) {
				// clear screen
				system("cls");

				//display h menu
				holgrehenn_menu();
				printf("Enter your choice: ");
				scanf("%s", h_user_input);

				/*If the user keeps entering inputs more than 1 character, the input is automatically disregarded and the user
				is asked to try again.*/
				/*strlen = string length > 1*/
				/*Enter your choice: 0*/

				while (strlen(h_user_input) > 1) {
					system("cls");
					holgrehenn_menu();
					printf("Unrecognized Input. Try again: ");
					scanf("%s", h_user_input);
				}

				/*If the user was successful in entering one character only, the first character of the user_input array is
				taken as the choice. It is also made to an uppercase to make handling of errors easier.*/
				h_choice = toupper(h_user_input[0]);

				/*
				Pass by Reference
				int ymir = 100;
				int Test(int money)
				{
					money = 1000;
					return money;
				}
				Test(ymir);
							

				*/

				switch (h_choice) {
				case '1': // buy items
					system("cls");
					current_ymir = buy_items(current_ymir, bag_amount);
					break;

				case '2':
					system("cls");
					current_ymir = sell_items(current_ymir, bag_amount, bagitem_name_array);
					break;

				case 'B':
					h_exit = 1;
					break;
				default:
					printf("Invalid choice. ");
					system("pause");
				}
			}
			break;		

		case '2': // Taal Lake
			system("cls");
			fishing_menu(2, bag_amount);
			break;

		case '3': // Galathea Deep
			system("cls");
			fishing_menu(3, bag_amount);
			break;

		case '4': // Dagupan Mangrove Forests
			system("cls");
			fishing_menu(4, bag_amount);
			break;

		case '5': // Mindanao Current
			system("cls");
			fishing_menu(5, bag_amount);
			break;

		case 'B':
			system("cls");/*                              v    */
			if (view_bag(bag_amount, bagitem_name_array, 17) == 0)
				printf("Your bag is currently empty.\n");
			// wait for user keyboard input
			system("PAUSE");
			break;

		default:
			printf("Invalid choice, try again. ");
			system("PAUSE");
			break;
		}	

	}
}
