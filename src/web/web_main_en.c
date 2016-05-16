#include <stdio.h>
#include <stdlib.h>
#include <fcgi_stdio.h>

//Simple calculator for crafting in BDO

//function prorotypes
void aloe_cookie(int batch);
void aloe_yogurt(int batch);
void beer(int batch);
void boiled_bird_eggs(int batch);
void dressing(int batch);
void essence_liquor(int batch);
void exotic_herbal_wine(int batch);
void fried_fish(int batch);
void fried_vegetables(int batch);
void fruit_juice(int batch);
void fruit_pudding(int batch);
void grain_soup(int batch);
void grilled_sausage(int batch);
void meat_soup(int batch);
void meat_stew(int batch);
void red_sauce(int batch);
void seafood_grilled_butter(int batch);
void seafood_mushroom_salad(int batch);
void steamed_fish(int batch);
void stir_fried_seafood(int batch);
void stir_fried_vegetables(int batch);
void vinegar(int batch);
//apprentice recipes
void beehive_cookie_a(int batch);
void beehive_cookie_b(int batch);
void cheese_gratin(int batch);
void fish_fillet_salad(int batch);
void fish_fillet_chip(int batch);
void fish_soup(int batch);
void fried_bird(int batch);
//Fruit and Vegetable Salad
void fruit_vegetable_salad(int batch);
void fruit_pie(int batch);
void fruit_wine(int batch);
void good_feed(int batch);
//High Quality Carrot Juice
void hq_carrot_juice(int batch);
void honey_wine(int batch);
void lizard_kebab(int batch);
void meat_pasta(int batch);
void meat_pie(int batch);
void oatmeal(int batch);
void omelet(int batch);
void organic_feed_a(int batch);
void organic_feed_b(int batch);
void pickled_fish(int batch);
void pickled_vegetables(int batch);
void seafood_pasta(int batch);
void smoked_fish_steak(int batch);
void soft_bread(int batch);
void special_carrot_juice(int batch);
void steak(int batch);
void steamed_bird(int batch);
void steamed_seafood(int batch);
void stir_fried_meat(int batch);
void tea_fine_scent(int batch);
void white_sauce(int batch);
//Skilled recipes
void balenos_special(int batch);
void calpheon_special(int batch);
void cheese_pie(int batch);
void dark_pudding(int batch);
void lean_meat_salad(int batch);
void meat_croquette(int batch);
void meat_sandwich(int batch);

int main()
{
        while(FCGI_Accept() >=0) {
                printf("Content-Type: text/html\r\n\r\n\r\n");

        char *data;
        int x;
        int batch;

        data = getenv("QUERY_STRING");

        if(data == NULL)
                printf("<p>ERROR! Error in passing data from form to script.</p>");

        if(sscanf(data, "x=%d&batch=%d", &x,&batch)!=2)
                printf("<p>ERROR! Invalid data.</p>");

//list choice
//beginner recipes
        if (x == 1)
                aloe_cookie(batch);
        else if (x == 2)
                aloe_yogurt(batch);
        else if (x == 3)
                beer(batch);
        else if (x == 4)
                boiled_bird_eggs(batch);
        else if (x == 5)
                dressing(batch);
        else if (x == 6)
                essence_liquor(batch);
        else if (x == 7)
                exotic_herbal_wine(batch);
        else if (x == 8)
                fried_fish(batch);
        else if (x == 9)
                fried_vegetables(batch);
        else if (x == 10)
                fruit_juice(batch);
        else if (x == 11)
                fruit_pudding(batch);
        else if (x == 12)
                grain_soup(batch);
        else if (x == 13)
                grilled_sausage(batch);
        else if (x == 14)
                meat_soup(batch);
        else if(x == 15)
                meat_stew(batch);
        else if (x == 16)
                red_sauce(batch);
        else if (x == 17)
                seafood_grilled_butter(batch);
        else if (x == 18)
                seafood_mushroom_salad(batch);
        else if (x == 19)
                steamed_fish(batch);
        else if (x == 20)
                stir_fried_seafood(batch);
        else if (x == 21)
                stir_fried_vegetables(batch);
        else if (x == 22)
                vinegar(batch);
//apprentice recipes
        else  if (x == 23)
                beehive_cookie_a(batch);
        else if (x == 24)
                beehive_cookie_b(batch);
        else if (x == 25)
                cheese_gratin(batch);
        else if (x == 26)
                fish_fillet_salad(batch);
        else if (x == 27)
                fish_fillet_chip(batch);
        else if (x == 28)
                fish_soup(batch);
        else if (x == 29)
                fried_bird(batch);
        else if (x == 30)
                fruit_vegetable_salad(batch);
        else if (x == 31)
                fruit_pie(batch);
        else if (x == 32)
                fruit_wine(batch);
        else if (x == 33)
                good_feed(batch);
        else if (x == 34)
                hq_carrot_juice(batch);
        else if (x == 35)
                honey_wine(batch);
        else if (x == 36)
                lizard_kebab(batch);
        else if (x == 37)
                meat_pasta(batch);
        else  if (x == 38)
                meat_pie(batch);
        else if (x == 39)
                oatmeal(batch);
        else if (x == 40)
                omelet(batch);
        else if (x == 41)
                organic_feed_a(batch);
        else if (x == 42)
                organic_feed_b(batch);
        else if (x == 43)
                pickled_fish(batch);
        else if (x == 44)
                pickled_vegetables(batch);
        else if (x == 45)
                seafood_pasta(batch);
        else if (x == 46)
                smoked_fish_steak(batch);
        else if (x == 47)
                soft_bread(batch);
        else if (x == 48)
                special_carrot_juice(batch);
        else if (x == 49)
                steak(batch);
        else if (x == 50)
                steamed_bird(batch);
        else if (x == 51)
                steamed_seafood(batch);
        else if (x == 52)
                stir_fried_meat(batch);
        else if (x == 53)
                tea_fine_scent(batch);
        else if (x == 54)
                white_sauce(batch);
        }
        return 0;
}

//Cooking recipes

//beginner recipes
//TODO: add alternative ingredients (dough, fruit, vegetables etc)

void aloe_cookie(int batch)
{
        int aloe = 5;
        int dough = 7;
        int cooking_honey = 3;
        int sugar = 4;

        printf(" <p>Aloe: %d</p>\n", aloe * batch);
        printf(" <p>Dough: %d</p>\n", dough * batch);
        printf(" <p>Cooking Honey: %d</p>\n", cooking_honey * batch);
        printf(" <p>Sugar: %d</p>\n", sugar * batch);
}

void aloe_yogurt(int batch)
{
        int aloe = 5;
        int milk = 2;
        int sugar = 3;
        int leav_ag = 3;

        printf(" <p>Aloe: %d</p>\n", aloe * batch);
        printf(" <p>Milk: %d</p>\n", milk * batch);
        printf(" <p>Sugar: %d</p>\n", sugar * batch);
        printf(" <p>Leavening Agent: %d</p>\n", leav_ag * batch);
}

void beer(int batch)
{
        int sugar = 1;
        int leav_ag = 2;
        int wheat = 5;
        int min_water = 6;

//calculate required ingredients
        printf(" <p>Sugar: %d</p>\n", sugar * batch);
        printf(" <p>Leavening Agent: %d</p>\n", leav_ag * batch);
        printf(" <p>Wheat: %d</p>\n", wheat * batch);
        printf(" <p>Mineral Water: %d</p>\n", min_water * batch);
}

void boiled_bird_eggs(int batch)
{
        int egg = 3;
        int min_water = 6;
        int cooking_wine = 1;
        int salt = 1;

        printf(" <p>Egg: %d</p>\n", egg * batch);
        printf(" <p>Mineral Water: %d</p>\n", min_water * batch);
        printf(" <p>Cooking Wine: %d</p>\n", cooking_wine * batch);
        printf(" <p>Salt: %d</p>\n", salt * batch);
}

void dressing(int batch)
{
        int olive_oil = 1;
        int min_water = 1;
        int egg = 1;
        int salt = 2;

        printf(" <p>Olive Oil: %d</p>\n", olive_oil * batch);
        printf(" <p>Mineral Water: %d</p>\n", min_water * batch);
        printf(" <p>Egg: %d</p>\n", egg * batch);
        printf(" <p>Salt: %d</p>\n", salt * batch);
}

void essence_liquor(int batch)
{
        int flour = 1;
        int fruit = 1;
        int leav_ag = 1;

        printf(" <p>Flour: %d</p>\n", flour * batch);
        printf(" <p>Fruit: %d</p>\n", fruit * batch);
        printf(" <p>Leavening Agent: %d</p>\n", leav_ag * batch);
}

void exotic_herbal_wine(int batch)
{
        int dough = 3;
        int es_of_liq = 1;
        int min_water = 5;
        int leav_ag = 2;

        printf(" <p>Dough: %d</p>\n", dough * batch);
        printf(" <p>Essence of Liquor: %d</p>\n", es_of_liq * batch);
        printf(" <p>Mineral Water: %d</p>\n", min_water * batch);
        printf(" <p>Leavening Agent: %d</p>\n", leav_ag * batch);
}

void fried_fish(int batch)
{
        int fish = 1;
        int flour = 3;
        int deep_frying_oil = 2;

        printf(" <p>Fish: %d</p>\n", fish * batch);
        printf(" <p>Flour: %d</p>\n", flour * batch);
        printf(" <p>Deep Frying Oil: %d</p>\n", deep_frying_oil * batch);
}

void fried_vegetables(int batch)
{
        int vegetables = 4;
        int dough = 4;
        int egg = 2;
        int deep_frying_oil = 6;

        printf(" <p>Vegetables: %d</p>\n", vegetables * batch);
        printf(" <p>Dough: %d</p>\n", dough * batch);
        printf(" <p>Egg: %d</p>\n", egg * batch);
        printf(" <p>Deep Frying Oil: %d</p>\n", deep_frying_oil * batch);
}

void fruit_juice(int batch)
{
        int fruit = 4;
        int sugar = 3;
        int min_water = 5;
        int salt = 1;

        printf(" <p>Fruit: %d</p>\n", fruit * batch);
        printf(" <p>Sugar: %d</p>\n", sugar * batch);
        printf(" <p>Mineral Water: %d</p>\n", min_water * batch);
        printf(" <p>Salt: %d</p>\n", salt * batch);
}

void fruit_pudding(int batch)
{
        int fruit = 5;
        int cream = 1;
        int milk = 3;
        int sugar = 2;

        printf(" <p>Fruit: %d</p>\n", fruit * batch);
        printf(" <p>Cream: %d</p>\n", cream * batch);
        printf(" <p>Milk: %d</p>\n", milk * batch);
        printf(" <p>Sugar: %d</p>\n", sugar * batch);
}

void grain_soup(int batch)
{
        int cereals = 6;
        int min_water = 3;
        int cooking_wine = 3;
        int salt = 1;

        printf(" <p>Cereals: %d</p>\n", cereals * batch);
        printf(" <p>Mineral Water: %d</p>\n", min_water * batch);
        printf(" <p>Cooking Wine: %d</p>\n", cooking_wine * batch);
        printf(" <p>Salt: %d</p>\n", salt * batch);
}

void grilled_sausage(int batch)
{
        int meat = 6;
        int onion = 1;
        int pepper = 2;
        int salt = 2;

        printf(" <p>Meat: %d</p>\n", meat * batch);
        printf(" <p>Onion: %d</p>\n", onion * batch);
        printf(" <p>Pepper: %d</p>\n", pepper * batch);
        printf(" <p>Salt: %d</p>\n", salt * batch);
}

void meat_soup(int batch)
{
        int meat = 5;
        int pepper = 1;
        int cream = 2;
        int min_water = 4;

        printf(" <p>Meat: %d</p>\n", meat * batch);
        printf(" <p>Pepper: %d</p>\n", pepper * batch);
        printf(" <p>Cream: %d</p>\n", cream * batch);
        printf(" <p>Mineral Water: %d</p>\n", min_water * batch);
}

void meat_stew(int batch)
{
        int meat = 5;
        int flour = 2;
        int cooking_wine = 2;
        int min_water = 3;

        printf(" <p>Meat: %d</p>\n", meat * batch);
        printf(" <p>Flour: %d</p>\n", flour * batch);
        printf(" <p>Cooking Wine: %d</p>\n", cooking_wine * batch);
        printf(" <p>Mineral Water: %d</p>\n", min_water * batch);
}

void red_sauce(int batch)
{
        int base_sauce = 1;
        int sugar = 2;
        int meat = 1;
        int min_water = 2;

        printf(" <p>Base Sauce: %d</p>\n", base_sauce * batch);
        printf(" <p>Sugar: %d</p>\n", sugar * batch);
        printf(" <p>Meat: %d</p>\n", meat * batch);
        printf(" <p>Mineral Water: %d</p>\n", min_water * batch);
}

void seafood_grilled_butter(int batch)
{
        int seafood = 1;
        int butter = 3;
        int salt = 2;
        int olive_oil = 1;

        printf(" <p>Seafood: %d</p>\n", seafood * batch);
        printf(" <p>Butter: %d</p>\n", butter * batch);
        printf(" <p>Salt: %d</p>\n", salt * batch);
        printf(" <p>Olive Oil: %d</p>\n", olive_oil * batch);
}

void seafood_mushroom_salad(int batch)
{
        int seafood = 1;
        int cloud_mushroom = 3;
        int dressing = 2;

        printf(" <p>Seafood: %d</p>\n", seafood * batch);
        printf(" <p>Cloud Mushroom: %d</p>\n", cloud_mushroom * batch);
        printf(" <p>Dressing: %d</p>\n", dressing * batch);
}

void steamed_fish(int batch)
{
        int fish = 1;
        int garlic = 2;
        int salt = 2;
        int min_water = 3;

        printf(" <p>Fish: %d</p>\n", fish * batch);
        printf(" <p>Garlic: %d</p>\n", garlic * batch);
        printf(" <p>Salt: %d</p>\n", salt * batch);
        printf(" <p>Mineral Water: %d</p>\n", min_water * batch);
}

void stir_fried_seafood(int batch)
{
        int seafood = 1;
        int vegetables = 4;
        int white_sauce = 2;
        int hot_pepper = 2;

        printf(" <p>Seafood: %d</p>\n", seafood * batch);
        printf(" <p>Vegetables: %d</p>\n", vegetables * batch);
        printf(" <p>White Sauce: %d</p>\n", white_sauce * batch);
        printf(" <p>Hot Pepper: %d</p>\n", hot_pepper * batch);
}

void stir_fried_vegetables(int batch)
{
        int vegetables = 5;
        int hot_pepper = 2;
        int olive_oil = 2;
        int salt = 1;

        printf(" <p>Vegatables: %d</p>\n", vegetables * batch);
        printf(" <p>Hot Pepper: %d</p>\n", hot_pepper * batch);
        printf(" <p>Olive Oil: %d</p>\n", olive_oil * batch);
        printf(" <p>Salt: %d</p>\n", salt * batch);
}

void vinegar(int batch)
{
        int cereals = 1;
        int fruit = 1;
        int leav_ag = 1;
        int sugar = 1;

        printf(" <p>Cereals: %d</p>\n", cereals * batch);
        printf(" <p>Fruit: %d</p>\n", fruit * batch);
        printf(" <p>Leavening Agent: %d</p>\n", leav_ag * batch);
        printf(" <p>Sugar: %d</p>\n", sugar * batch);
}

//apprentice recipes
void beehive_cookie_a(int batch)
{
        int dough = 4;
        int cooking_honey = 6;
        int egg = 2;
        int milk = 4;

        printf(" <p>Dough: %d</p>\n", dough * batch);
        printf(" <p>Cooking Honey: %d</p>\n", cooking_honey * batch);
        printf(" <p>Egg: %d</p>\n", egg * batch);
        printf(" <p>Milk: %d</p>\n", milk * batch);
}

void beehive_cookie_b(int batch)
{
        int dough = 4;
        int wild_beehive = 6;
        int egg = 2;
        int milk = 4;

        printf(" <p>Dough: %d</p>\n", dough * batch);
        printf(" <p>Wild Beehive: %d</p>\n", wild_beehive * batch);
        printf(" <p>Egg: %d</p>\n", egg * batch);
        printf(" <p>Milk: %d</p>\n", milk * batch);
}

void cheese_gratin(int batch)
{
        int grilled_sausage = 1;
        int dough = 5;
        int vegetables = 4;
        int cheese = 3;
        int red_sauce = 3;

        printf(" <p>Grilled Sausage: %d</p>\n", grilled_sausage * batch);
        printf(" <p>Dough: %d</p>\n", dough * batch);
        printf(" <p>Vegetables: %d</p>\n", vegetables * batch);
        printf(" <p>Cheese: %d</p>\n", cheese * batch);
        printf(" <p>Red sauce: %d</p>\n", red_sauce * batch);
}

void fish_fillet_salad(int batch)
{
        int fish = 2;
        int dressing = 2;
        int onion = 3;
        int cheese = 2;

        printf(" <p>Fish: %d</p>\n", fish * batch);
        printf(" <p>Dressing: %d</p>\n", dressing * batch);
        printf(" <p>Onion: %d</p>\n", onion * batch);
        printf(" <p>Cheese: %d</p>\n", cheese * batch);
}

void fish_fillet_chip(int batch)
{
        int dried_fish = 2;
        int white_sauce = 3;
        int flour = 7;
        int salt = 2;

        printf(" <p>Dried Fish: %d</p>\n", dried_fish * batch);
        printf(" <p>White Sauce: %d</p>\n", white_sauce * batch);
        printf(" <p>Flour: %d</p>\n", flour * batch);
        printf(" <p>Salt: %d</p>\n", salt * batch);
}

void fish_soup(int batch)
{
        int fish = 1;
        int flour = 3;
        int cream = 2;
        int min_water = 6;

        printf(" <p>Fish: %d</p>\n", fish * batch);
        printf(" <p>Flour: %d</p>\n", flour * batch);
        printf(" <p>Cream: %d</p>\n", cream * batch);
        printf(" <p>Mineral Water: %d</p>\n", min_water * batch);
}

void fried_bird(int batch)
{
        int bird_meat = 7;
        int flour = 4;
        int egg = 2;
        int pepper = 3;

        printf(" <p>Bird Meat: %d</p>\n", bird_meat * batch);
        printf(" <p>Flour: %d</p>\n", flour * batch);
        printf(" <p>Egg: %d</p>\n", egg * batch);
        printf(" <p>Pepper: %d</p>\n", pepper * batch);
}

//Fruit and Vegetable Salad
void fruit_vegetable_salad(int batch)
{
        int fruit = 4;
        int vegetables = 4;
        int vinegar = 2;
        int cooking_wine = 4;

        printf(" <p>Fruit: %d</p>\n", fruit * batch);
        printf(" <p>Vegetables: %d</p>\n", vegetables * batch);
        printf(" <p>Vinegar: %d</p>\n", vinegar * batch);
        printf(" <p>Cooking Wine: %d</p>\n", cooking_wine * batch);
}

void fruit_pie(int batch)
{
        int dough = 6;
        int fruit = 6;
        int cream = 3;
        int sugar = 4;

        printf(" <p>Dough: %d</p>\n", dough * batch);
        printf(" <p>Fruit: %d</p>\n", fruit * batch);
        printf(" <p>Cream: %d</p>\n", cream * batch);
        printf(" <p>Sugar: %d</p>\n", sugar * batch);
}

void fruit_wine(int batch)
{
        int exotic_herbal_wine = 1;
        int fruit = 5;
        int essence_liquor = 3;
        int min_water = 2;

        printf(" <p>Exotic Herbal Wine: %d</p>\n", exotic_herbal_wine * batch);
        printf(" <p>Fruit: %d</p>\n", fruit * batch);
        printf(" <p>Essence of Liquor: %d</p>\n", essence_liquor * batch);
        printf(" <p>Mineral Water: %d</p>\n", min_water * batch);
}

void good_feed(int batch)
{
        int meat = 6;
        int fish = 1;
        int min_water = 3;
        int flour = 4;

        printf(" <p>Meat: %d</p>\n", meat * batch);
        printf(" <p>Fish: %d</p>\n", fish * batch);
        printf(" <p>Mineral Water: %d</p>\n", min_water * batch);
        printf(" <p>Flour: %d</p>\n", flour * batch);
}

//High Quality Carrot Juice
void hq_carrot_juice(int batch)
{
        int hq_carrot = 1;
        int flour = 3;
        int sugar = 3;
        int min_water = 4;

        printf(" <p>High-Quality Carrot: %d</p>\n", hq_carrot * batch);
        printf(" <p>Flour: %d</p>\n", flour * batch);
        printf(" <p>Sugar: %d</p>\n", sugar * batch);
        printf(" <p>Mineral Water: %d</p>\n", min_water * batch);
}

void honey_wine(int batch)
{
        int cooking_honey = 3;
        int essence_liquor = 2;
        int sugar = 2;
        int min_water = 6;

        printf(" <p>Cooking Honey: %d</p>\n", cooking_honey * batch);
        printf(" <p>Essence of Liquor: %d</p>\n", essence_liquor * batch);
        printf(" <p>Sugar: %d</p>\n", sugar * batch);
        printf(" <p>Mineral Water: %d</p>\n", min_water * batch);
}

void lizard_kebab(int batch)
{
        int reptile_meat = 6;
        int red_sauce = 2;
        int vegetables = 4;
        int onion = 4;
        int cereals = 7;

        printf(" <p>Reptile Meat: %d</p>\n", reptile_meat * batch);
        printf(" <p>Red Sauce: %d</p>\n", red_sauce * batch);
        printf(" <p>Vegetables: %d</p>\n", vegetables * batch);
        printf(" <p>Onion: %d</p>\n", onion * batch);
        printf(" <p>Cereals: %d</p>\n", cereals * batch);
}

void meat_pasta(int batch)
{
        int meat = 5;
        int dough = 4;
        int pepper = 3;
        int garlic = 2;

        printf(" <p>Meat: %d</p>\n", meat * batch);
        printf(" <p>Dough: %d</p>\n", dough * batch);
        printf(" <p>Pepper: %d</p>\n", pepper * batch);
        printf(" <p>Garlic: %d</p>\n", garlic * batch);
}

void meat_pie(int batch)
{
        int meat = 4;
        int dough = 6;
        int sugar = 2;
        int olive_oil = 2;

        printf(" <p>Meat: %d</p>\n", meat * batch);
        printf(" <p>Dough: %d</p>\n", dough * batch);
        printf(" <p>Sugar: %d</p>\n", sugar * batch);
        printf(" <p>Olive Oil: %d</p>\n", olive_oil * batch);
}

void oatmeal(int batch)
{
        int flour = 9;
        int milk = 3;
        int onion = 3;
        int cooking_honey = 2;

        printf(" <p>Flour: %d</p>\n", flour * batch);
        printf(" <p>Milk: %d</p>\n", milk * batch);
        printf(" <p>Onion: %d</p>\n", onion * batch);
        printf(" <p>Cooking Honey: %d</p>\n", cooking_honey * batch);
}

void omelet(int batch)
{
        int cereals = 5;
        int olive_oil = 2;
        int egg = 5;
        int salt = 2;

        printf(" <p>Cereals: %d</p>\n", cereals * batch);
        printf(" <p>Olive Oil: %d</p>\n", olive_oil * batch);
        printf(" <p>Egg: %d</p>\n", egg * batch);
        printf(" <p>Salt: %d</p>\n", salt * batch);
}

void organic_feed_a(int batch)
{
        int oatmeal = 2;
        int meat = 5;
        int bird_meat = 4;
        int fish_a = 1;
        int fish_b = 1;

        printf(" <p>Oatmeal: %d\n", oatmeal * batch);
        printf(" <p>Meat: %d</p>\n", meat * batch);
        printf(" <p>Bird Meat: %d</p>\n", bird_meat * batch);
        printf(" <p>Fish #1: %d</p>\n", fish_a * batch);
        printf(" <p>Fish #2: %d</p>\n", fish_b * batch);
}

void organic_feed_b(int batch)
{
        int oatmeal = 2;
        int meat = 5;
        int bird_meat = 4;
        int dried_fish = 4;

        printf(" <p>Oatmeal: %d</p>\n", oatmeal * batch);
        printf(" <p>Meat: %d</p>\n", meat * batch);
        printf(" <p>Bird Meat: %d</p>\n", bird_meat * batch);
        printf(" <p>Dried Fish: %d</p>\n", dried_fish * batch);
}

void pickled_fish(int batch)
{
        int fish = 1;
        int vinegar = 3;
        int salt = 4;
        int leav_ag = 2;

        printf(" <p>Fish: %d</p>\n", fish * batch);
        printf(" <p>Vinegar: %d</p>\n", vinegar * batch);
        printf(" <p>Salt: %d</p>\n", salt * batch);
        printf(" <p>Leavening Agent: %d</p>\n", leav_ag * batch);
}

void pickled_vegetables(int batch)
{
        int vegetables = 8;
        int vinegar = 4;
        int leav_ag = 2;
        int sugar = 2;

        printf(" <p>Vegetables: %d</p>\n", vegetables * batch);
        printf(" <p>Vinegar: %d</p>\n", vinegar * batch);
        printf(" <p>Leavening Agent: %d</p>\n", leav_ag * batch);
        printf(" <p>Sugar: %d</p>\n", sugar * batch);
}

void seafood_pasta(int batch)
{
        int seafood = 2;
        int dough = 5;
        int cooking_wine = 3;
        int garlic = 3;

        printf(" <p>Seafood: %d</p>\n", seafood * batch);
        printf(" <p>Dough: %d</p>\n", dough * batch);
        printf(" <p>Cooking Wine: %d</p>\n", cooking_wine * batch);
        printf(" <p>Garlic: %d</p>\n", garlic * batch);
}

void smoked_fish_steak(int batch)
{
        int fish = 2;
        int olive_oil = 1;
        int salt = 2;

        printf(" <p>Fish: %d</p>\n", fish * batch);
        printf(" <p>Olive Oil: %d</p>\n", olive_oil * batch);
        printf(" <p>Salt: %d</p>\n", salt * batch);
}

void soft_bread(int batch)
{
        int dough = 6;
        int leav_ag = 2;
        int egg = 2;
        int milk = 3;

        printf(" <p>Dough: %d</p>\n", dough * batch);
        printf(" <p>Leavening Agent: %d</p>\n", leav_ag * batch);
        printf(" <p>Egg: %d</p>\n", egg * batch);
        printf(" <p>Milk: %d</p>\n", milk * batch);
}

void special_carrot_juice(int batch)
{
        int special_carrot = 1;
        int flour = 3;
        int sugar = 3;
        int min_water = 4;

        printf(" <p>Special Carrot: %d</p>\n", special_carrot * batch);
        printf(" <p>Flour: %d</p>\n", flour * batch);
        printf(" <p>Sugar: %d</p>\n", sugar * batch);
        printf(" <p>Mineral Water: %d</p>\n", min_water * batch);
}

void steak(int batch)
{
        int meat = 8;
        int salt = 2;
        int garlic = 2;
        int red_sauce = 2;

        printf(" <p>Meat: %d</p>\n", meat * batch);
        printf(" <p>Salt: %d</p>\n", salt * batch);
        printf(" <p>Garlic: %d</p>\n", garlic * batch);
        printf(" <p>Red Sauce: %d</p>\n", red_sauce * batch);
}

void steamed_bird(int batch)
{
        int bird_meat = 5;
        int vegetables = 3;
        int vinegar = 2;
        int essence_liquor = 2;

        printf(" <p>Bird Meat: %d</p>\n", bird_meat * batch);
        printf(" <p>Vegetables: %d</p>\n", vegetables * batch);
        printf(" <p>Vinegar: %d</p>\n", vinegar * batch);
        printf(" <p>Essence of Liquor: %d</p>\n", essence_liquor * batch);
}

void steamed_seafood(int batch)
{
        int seafood = 2;
        int hot_pepper = 3;
        int min_water = 6;
        int salt = 2;

        printf(" <p>Seafood: %d</p>\n", seafood * batch);
        printf(" <p>Hot Pepper: %d</p>\n", hot_pepper * batch);
        printf(" <p>Mineral Water: %d</p>\n", min_water * batch);
        printf(" <p>Salt: %d</p>\n", salt * batch);
}

void stir_fried_meat(int batch)
{
        int meat = 7;
        int base_sauce = 2;
        int onion = 2;
        int hot_pepper = 3;

        printf(" <p>Meat: %d</p>\n", meat * batch);
        printf(" <p>Base Sauce: %d</p>\n", base_sauce * batch);
        printf(" <p>Onion: %d</p>\n", onion * batch);
        printf(" <p>Hot Pepper: %d</p>\n", hot_pepper * batch);
}

void tea_fine_scent(int batch)
{
        int plants = 4;
        int fruit = 4;
        int min_water = 7;
        int cooking_honey = 3;

        printf(" <p>Plants: %d</p>\n", plants * batch);
        printf(" <p>Fruit: %d</p>\n", fruit * batch);
        printf(" <p>Mineral Water: %d</p>\n", min_water * batch);
        printf(" <p>Cooking Honey: %d</p>\n", cooking_honey * batch);
}

void white_sauce(int batch)
{
        int base_sauce = 1;
        int milk = 1;
        int fruit = 1;
        int cooking_wine = 2;

        printf(" <p>Base Sauce: %d</p>\n", base_sauce * batch);
        printf(" <p>Milk: %d</p>\n", milk * batch);
        printf(" <p>Fruit: %d</p>\n", fruit * batch);
        printf(" <p>Cooking Wine: %d</p>\n", cooking_wine * batch);
}

//Skilled recipes
void balenos_special(int batch)
{
        int cheese_gratin = 1;
        int meat_croquette = 1;
        int smoked_fish_steak = 1;
        int stir_fried_vegetables = 2;
        int beer = 2;

        printf(" <p>Cheese Gratin: %d</p>\n", cheese_gratin * batch);
        printf(" <p>Meat Croquette: %d</p>\n", meat_croquette * batch);
        printf(" <p>Smoked Fish Steak: %d</p>\n", smoked_fish_steak * batch);
        printf(" <p>Stir-Fried Vegetables: %d</p>\n", stir_fried_vegetables * batch);
        printf(" <p>Beer: %d</p>\n", beer * batch);
}

void calpheon_special(int batch)
{
        int soft_bread = 2;
        int milk_tea = 1;
        int fish_fillet_salad = 1;
        int cheese_pie = 1;
        int meat_pasta = 1;

        printf(" <p>Soft Bread: %d</p>\n", soft_bread * batch);
        printf(" <p>Milk Tea: %d</p>\n", milk_tea * batch);
        printf(" <p>Fish Fillet Salad: %d</p>\n", fish_fillet_salad * batch);
        printf(" <p>Cheese Pie: %d</p>\n", cheese_pie * batch);
        printf(" <p>Meat Pasta: %d</p>\n", meat_pasta * batch);
}

void cheese_pie(int batch)
{
        int dough = 4;
        int cheese = 7;
        int butter = 3;
        int egg = 3;

        printf(" <p>Dough: %d</p>\n", dough * batch);
        printf(" <p>Cheese: %d</p>\n", cheese * batch);
        printf(" <p>Butter: %d</p>\n", butter * batch);
        printf(" <p>Egg: %d</p>\n", egg * batch);
}

void dark_pudding(int batch)
{
        int oatmeal = 1;
        int pickled_vegetables = 1;
        int bird_meat = 5;
        int deer_blood = 7;

        printf(" <p>Oatmeal: %d</p>\n", oatmeal * batch);
        printf(" <p>Pickled Vegetables: %d</p>\n", pickled_vegetables * batch);
        printf(" <p>Bird Meat: %d</p>\n", bird_meat * batch);
        printf(" <p>Deer Blood: %d</p>\n", deer_blood * batch);
}

void lean_meat_salad(int batch)
{
        int meat = 8;
        int vinegar = 2;
        int pepper = 3;
        int dressing = 4;

        printf(" <p>Meat: %d</p>\n", meat * batch);
        printf(" <p>Vinegar: %d</p>\n", vinegar * batch);
        printf(" <p>Pepper: %d</p>\n", pepper * batch);
        printf(" <p>Dressing: %d</p>\n", dressing * batch);
}

void meat_croquette(int batch)
{
        int meat = 8;
        int flour = 5;
        int egg = 2;
        int cheese = 2;
        int deep_frying_oil = 4;

        printf(" <p>Meat: %d</p>\n", meat * batch);
        printf(" <p>Flour: %d</p>\n", flour * batch);
        printf(" <p>Egg: %d</p>\n", egg * batch);
        printf(" <p>Cheese: %d</p>\n", cheese * batch);
        printf(" <p>Deep Frying Oil: %d</p>\n", deep_frying_oil * batch);
}

void meat_sandwich(int batch)
{
        int soft_bread = 1;
        int meat = 7;
        int vegetables = 6;
        int cheese = 3;

        printf(" <p>Soft Bread: %d</p>\n", soft_bread * batch);
        printf(" <p>Meat: %d</p>\n", meat * batch);
        printf(" <p>Vegetables: %d</p>\n", vegetables * batch);
        printf(" <p>Cheese: %d</p>\n", cheese * batch);
}
