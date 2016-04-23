#include <stdio.h>

//Simple calculator for crafting in BDO

//Cooking recipes

//beginner recipes
//TODO: add alternative ingredients (dough, fruit, vegetables etc)

void aloe_cookie(int batch)
{
        int aloe = 5;
        int dough = 7;
        int cooking_honey = 3;
        int sugar = 4;

        printf(" Aloe: %d\n", aloe * batch);
        printf(" Dough: %d\n", dough * batch);
        printf(" Cooking Honey: %d\n", cooking_honey * batch);
        printf(" Sugar: %d\n", sugar * batch);
}

void aloe_yogurt(int batch)
{
        int aloe = 5;
        int milk = 2;
        int sugar = 3;
        int leav_ag = 3;

        printf(" Aloe: %d\n", aloe * batch);
        printf(" Milk: %d\n", milk * batch);
        printf(" Sugar: %d\n", sugar * batch);
        printf(" Leavening Agent: %d\n", leav_ag * batch);
}

void beer(int batch)
{
        int sugar = 1;
        int leav_ag = 2;
        int wheat = 5;
        int min_water = 6;

//calculate required ingredients
        printf(" Sugar: %d\n", sugar * batch);
        printf(" Leavening Agent: %d\n", leav_ag * batch);
        printf(" Wheat: %d\n", wheat * batch);
        printf(" Mineral Water: %d\n", min_water * batch);
}

void boiled_bird_eggs(int batch)
{
        int egg = 3;
        int min_water = 6;
        int cooking_wine = 1;
        int salt = 1;

        printf(" Egg: %d\n", egg * batch);
        printf(" Mineral Water: %d\n", min_water * batch);
        printf(" Cooking Wine: %d\n", cooking_wine * batch);
        printf(" Salt: %d\n", salt * batch);
}

void dressing(int batch)
{
        int olive_oil = 1;
        int min_water = 1;
        int egg = 1;
        int salt = 2;

        printf(" Olive Oil: %d\n", olive_oil * batch);
        printf(" Mineral Water: %d\n", min_water * batch);
        printf(" Egg: %d\n", egg * batch);
        printf(" Salt: %d\n", salt * batch);
}

void essence_liquor(int batch)
{
        int flour = 1;
        int fruit = 1;
        int leav_ag = 1;

        printf(" Flour: %d\n", flour * batch);
        printf(" Fruit: %d\n", fruit * batch);
        printf(" Leavening Agent: %d\n", leav_ag * batch);
}

void exotic_herbal_wine(int batch)
{
        int dough = 3;
        int es_of_liq = 1;
        int min_water = 5;
        int leav_ag = 2;

        printf(" Dough: %d\n", dough * batch);
        printf(" Essence of Liquor: %d\n", es_of_liq * batch);
        printf(" Mineral Water: %d\n", min_water * batch);
        printf(" Leavening Agent: %d\n", leav_ag * batch);
}

void fried_fish(int batch)
{
        int fish = 1;
        int flour = 3;
        int deep_frying_oil = 2;

        printf(" Fish: %d\n", fish * batch);
        printf(" Flour: %d\n", flour * batch);
        printf(" Deep Frying Oil: %d\n", deep_frying_oil * batch);
}

void fried_vegetables(int batch)
{
        int vegetables = 4;
        int dough = 4;
        int egg = 2;
        int deep_frying_oil = 6;

        printf(" Vegetables: %d\n", vegetables * batch);
        printf(" Dough: %d\n", dough * batch);
        printf(" Egg: %d\n", egg * batch);
        printf(" Deep Frying Oil: %d\n", deep_frying_oil * batch);
}

void fruit_juice(int batch)
{
        int fruit = 4;
        int sugar = 3;
        int min_water = 5;
        int salt = 1;

        printf(" Fruit: %d\n", fruit * batch);
        printf(" Sugar: %d\n", sugar * batch);
        printf(" Mineral Water: %d\n", min_water * batch);
        printf(" Salt: %d\n", salt * batch);
}

void fruit_pudding(int batch)
{
        int fruit = 5;
        int cream = 1;
        int milk = 3;
        int sugar = 2;

        printf(" Fruit: %d\n", fruit * batch);
        printf(" Cream: %d\n", cream * batch);
        printf(" Milk: %d\n", milk * batch);
        printf(" Sugar: %d\n", sugar * batch);
}

void grain_soup(int batch)
{
        int cereals = 6;
        int min_water = 3;
        int cooking_wine = 3;
        int salt = 1;

        printf(" Cereals: %d\n", cereals * batch);
        printf(" Mineral Water: %d\n", min_water * batch);
        printf(" Cooking Wine: %d\n", cooking_wine * batch);
        printf(" Salt: %d\n", salt * batch);
}

void grilled_sausage(int batch)
{
        int meat = 6;
        int onion = 1;
        int pepper = 2;
        int salt = 2;

        printf(" Meat: %d\n", meat * batch);
        printf(" Onion: %d\n", onion * batch);
        printf(" Pepper: %d\n", pepper * batch);
        printf(" Salt: %d\n", salt * batch);
}

void meat_soup(int batch)
{
        int meat = 5;
        int pepper = 1;
        int cream = 2;
        int min_water = 4;

        printf(" Meat: %d\n", meat * batch);
        printf(" Pepper: %d\n", pepper * batch);
        printf(" Cream: %d\n", cream * batch);
        printf(" Mineral Water: %d\n", min_water * batch);
}

void meat_stew(int batch)
{
        int meat = 5;
        int flour = 2;
        int cooking_wine = 2;
        int min_water = 3;

        printf(" Meat: %d\n", meat * batch);
        printf(" Flour: %d\n", flour * batch);
        printf(" Cooking Wine: %d\n", cooking_wine * batch);
        printf(" Mineral Water: %d\n", min_water * batch);
}

void red_sauce(int batch)
{
        int base_sauce = 1;
        int sugar = 2;
        int meat = 1;
        int min_water = 2;

        printf(" Base Sauce: %d\n", base_sauce * batch);
        printf(" Sugar: %d\n", sugar * batch);
        printf(" Meat: %d\n", meat * batch);
        printf(" Mineral Water: %d\n", min_water * batch);
}

void seafood_grilled_butter(int batch)
{
        int seafood = 1;
        int butter = 3;
        int salt = 2;
        int olive_oil = 1;

        printf(" Seafood: %d\n", seafood * batch);
        printf(" Butter: %d\n", butter * batch);
        printf(" Salt: %d\n", salt * batch);
        printf(" Olive Oil: %d\n", olive_oil * batch);
}

void seafood_mushroom_salad(int batch)
{
        int seafood = 1;
        int cloud_mushroom = 3;
        int dressing = 2;

        printf(" Seafood: %d\n", seafood * batch);
        printf(" Cloud Mushroom: %d\n", cloud_mushroom * batch);
        printf(" Dressing: %d\n", dressing * batch);
}

void steamed_fish(int batch)
{
        int fish = 1;
        int garlic = 2;
        int salt = 2;
        int min_water = 3;

        printf(" Fish: %d\n", fish * batch);
        printf(" Garlic: %d\n", garlic * batch);
        printf(" Salt: %d\n", salt * batch);
        printf(" Mineral Water: %d\n", min_water * batch);
}

void stir_fried_seafood(int batch)
{
        int seafood = 1;
        int vegetables = 4;
        int white_sauce = 2;
        int hot_pepper = 2;

        printf(" Seafood: %d\n", seafood * batch);
        printf(" Vegetables: %d\n", vegetables * batch);
        printf(" White Sauce: %d\n", white_sauce * batch);
        printf(" Hot Pepper: %d\n", hot_pepper * batch);
}

void stir_fried_vegetables(int batch)
{
        int vegetables = 5;
        int hot_pepper = 2;
        int olive_oil = 2;
        int salt = 1;

        printf(" Vegatables: %d\n", vegetables * batch);
        printf(" Hot Pepper: %d\n", hot_pepper * batch);
        printf(" Olive Oil: %d\n", olive_oil * batch);
        printf("  Salt: %d\n", salt * batch);
}

void vinegar(int batch)
{
        int cereals = 1;
        int fruit = 1;
        int leav_ag = 1;
        int sugar = 1;

        printf(" Cereals: %d\n", cereals * batch);
        printf(" Fruit: %d\n", fruit * batch);
        printf(" Leavening Agent: %d\n", leav_ag * batch);
        printf(" Sugar: %d\n", sugar * batch);
}

//apprentice recipes
void beehive_cookie_a(int batch)
{
        int dough = 4;
        int cooking_honey = 6;
        int egg = 2;
        int milk = 4;

        printf(" Dough: %d\n", dough * batch);
        printf(" Cooking Honey: %d\n", cooking_honey * batch);
        printf(" Egg: %d\n", egg * batch);
        printf(" Milk: %d\n", milk * batch);
}

void beehive_cookie_b(int batch)
{
        int dough = 4;
        int wild_beehive = 6;
        int egg = 2;
        int milk = 4;

        printf(" Dough: %d\n", dough * batch);
        printf(" Wild Beehive: %d\n", wild_beehive * batch);
        printf(" Egg: %d\n", egg * batch);
        printf(" Milk: %d\n", milk * batch);
}

void cheese_gratin(int batch)
{
        int grilled_sausage = 1;
        int dough = 5;
        int vegetables = 4;
        int cheese = 3;
        int red_sauce = 3;

        printf(" Grilled Sausage: %d\n", grilled_sausage * batch);
        printf(" Dough: %d\n", dough * batch);
        printf(" Vegetables: %d\n", vegetables * batch);
        printf(" Cheese: %d\n", cheese * batch);
        printf(" Red sauce: %d\n", red_sauce * batch);
}

void fish_fillet_salad(int batch)
{
        int fish = 2;
        int dressing = 2;
        int onion = 3;
        int cheese = 2;

        printf(" Fish: %d\n", fish * batch);
        printf(" Dressing: %d\n", dressing * batch);
        printf(" Onion: %d\n", onion * batch);
        printf(" Cheese: %d\n", cheese * batch);
}

void fish_fillet_chip(int batch)
{
        int dried_fish = 2;
        int white_sauce = 3;
        int flour = 7;
        int salt = 2;

        printf(" Dried Fish: %d\n", dried_fish * batch);
        printf(" White Sauce: %d\n", white_sauce * batch);
        printf(" Flour: %d\n", flour * batch);
        printf(" Salt: %d\n", salt * batch);
}

void fish_soup(int batch)
{
        int fish = 1;
        int flour = 3;
        int cream = 2;
        int min_water = 6;

        printf(" Fish: %d\n", fish * batch);
        printf(" Flour: %d\n", flour * batch);
        printf(" Cream: %d\n", cream * batch);
        printf(" Mineral Water: %d\n", min_water * batch);
}

void fried_bird(int batch)
{
        int bird_meat = 7;
        int flour = 4;
        int egg = 2;
        int pepper = 3;

        printf(" Bird Meat: %d\n", bird_meat * batch);
        printf(" Flour: %d\n", flour * batch);
        printf(" Egg: %d\n", egg * batch);
        printf(" Pepper: %d\n", pepper * batch);
}

//Fruit and Vegetable Salad
void fruit_vegetable_salad(int batch)
{
        int fruit = 4;
        int vegetables = 4;
        int vinegar = 2;
        int cooking_wine = 4;

        printf(" Fruit: %d\n", fruit * batch);
        printf(" Vegetables: %d\n", vegetables * batch);
        printf(" Vinegar: %d\n", vinegar * batch);
        printf(" Cooking Wine: %d\n", cooking_wine * batch);
}

void fruit_pie(int batch)
{
        int dough = 6;
        int fruit = 6;
        int cream = 3;
        int sugar = 4;

        printf(" Dough: %d\n", dough * batch);
        printf(" Fruit: %d\n", fruit * batch);
        printf(" Cream: %d\n", cream * batch);
        printf(" Sugar: %d\n", sugar * batch);
}

void fruit_wine(int batch)
{
        int exotic_herbal_wine = 1;
        int fruit = 5;
        int essence_liquor = 3;
        int min_water = 2;

        printf(" Exotic Herbal Wine: %d\n", exotic_herbal_wine * batch);
        printf(" Fruit: %d\n", fruit * batch);
        printf(" Essence of Liquor: %d\n", essence_liquor * batch);
        printf(" Mineral Water: %d\n", min_water * batch);
}

void good_feed(int batch)
{
        int meat = 6;
        int fish = 1;
        int min_water = 3;
        int flour = 4;

        printf(" Meat: %d\n", meat * batch);
        printf(" Fish: %d\n", fish * batch);
        printf(" Mineral Water: %d\n", min_water * batch);
        printf(" Flour: %d\n", flour * batch);
}

//High Quality Carrot Juice
void hq_carrot_juice(int batch)
{
        int hq_carrot = 1;
        int flour = 3;
        int sugar = 3;
        int min_water = 4;

        printf(" High-Quality Carrot: %d\n", hq_carrot * batch);
        printf(" Flour: %d\n", flour * batch);
        printf(" Sugar: %d\n", sugar * batch);
        printf(" Mineral Water: %d\n", min_water * batch);
}

void honey_wine(int batch)
{
        int cooking_honey = 3;
        int essence_liquor = 2;
        int sugar = 2;
        int min_water = 6;

        printf(" Cooking Honey: %d\n", cooking_honey * batch);
        printf(" Essence of Liquor: %d\n", essence_liquor * batch);
        printf(" Sugar: %d\n", sugar * batch);
        printf(" Mineral Water: %d\n", min_water * batch);
}

void lizard_kebab(int batch)
{
        int reptile_meat = 6;
        int red_sauce = 2;
        int vegetables = 4;
        int onion = 4;
        int cereals = 7;

        printf(" Reptile Meat: %d\n", reptile_meat * batch);
        printf(" Red Sauce: %d\n", red_sauce * batch);
        printf(" Vegetables: %d\n", vegetables * batch);
        printf(" Onion: %d\n", onion * batch);
        printf(" Cereals: %d\n", cereals * batch);
}

void meat_pasta(int batch)
{
        int meat = 5;
        int dough = 4;
        int pepper = 3;
        int garlic = 2;

        printf(" Meat: %d\n", meat * batch);
        printf(" Dough: %d\n", dough * batch);
        printf(" Pepper: %d\n", pepper * batch);
        printf(" Garlic: %d\n", garlic * batch);
}

void meat_pie(int batch)
{
        int meat = 4;
        int dough = 6;
        int sugar = 2;
        int olive_oil = 2;

        printf(" Meat: %d\n", meat * batch);
        printf(" Dough: %d\n", dough * batch);
        printf(" Sugar: %d\n", sugar * batch);
        printf(" Olive Oil: %d\n", olive_oil * batch);
}

void oatmeal(int batch)
{
        int flour = 9;
        int milk = 3;
        int onion = 3;
        int cooking_honey = 2;

        printf(" Flour: %d\n", flour * batch);
        printf(" Milk: %d\n", milk * batch);
        printf(" Onion: %d\n", onion * batch);
        printf(" Cooking Honey: %d\n", cooking_honey * batch);
}

void omelet(int batch)
{
        int cereals = 5;
        int olive_oil = 2;
        int egg = 5;
        int salt = 2;

        printf(" Cereals: %d\n", cereals * batch);
        printf(" Olive Oil: %d\n", olive_oil * batch);
        printf(" Egg: %d\n", egg * batch);
        printf(" Salt: %d\n", salt * batch);
}

void organic_feed_a(int batch)
{
        int oatmeal = 2;
        int meat = 5;
        int bird_meat = 4;
        int fish_a = 1;
        int fish_b = 1;

        printf(" Oatmeal: %d\n", oatmeal * batch);
        printf(" Meat: %d\n", meat * batch);
        printf(" Bird Meat: %d\n", bird_meat * batch);
        printf(" Fish #1: %d\n", fish_a * batch);
        printf(" Fish #2: %d\n", fish_b * batch);
}

void organic_feed_b(int batch)
{
        int oatmeal = 2;
        int meat = 5;
        int bird_meat = 4;
        int dried_fish = 4;

        printf(" Oatmeal: %d\n", oatmeal * batch);
        printf(" Meat: %d\n", meat * batch);
        printf(" Bird Meat: %d\n", bird_meat * batch);
        printf(" Dried Fish: %d\n", dried_fish * batch);
}

void pickled_fish(int batch)
{
        int fish = 1;
        int vinegar = 3;
        int salt = 4;
        int leav_ag = 2;

        printf(" Fish: %d\n", fish * batch);
        printf(" Vinegar: %d\n", vinegar * batch);
        printf(" Salt: %d\n", salt * batch);
        printf(" Leavening Agent: %d\n", leav_ag * batch);
}

void pickled_vegetables(int batch)
{
        int vegetables = 8;
        int vinegar = 4;
        int leav_ag = 2;
        int sugar = 2;

        printf(" Vegetables: %d\n", vegetables * batch);
        printf(" Vinegar: %d\n", vinegar * batch);
        printf(" Leavening Agent: %d\n", leav_ag * batch);
        printf(" Sugar: %d\n", sugar * batch);
}

void seafood_pasta(int batch)
{
        int seafood = 2;
        int dough = 5;
        int cooking_wine = 3;
        int garlic = 3;

        printf(" Seafood: %d\n", seafood * batch);
        printf(" Dough: %d\n", dough * batch);
        printf(" Cooking Wine: %d\n", cooking_wine * batch);
        printf(" Garlic: %d\n", garlic * batch);
}

void smoked_fish_steak(int batch)
{
        int fish = 2;
        int olive_oil = 1;
        int salt = 2;

        printf(" Fish: %d\n", fish * batch);
        printf(" Olive Oil: %d\n", olive_oil * batch);
        printf(" Salt: %d\n", salt * batch);
}

void soft_bread(int batch)
{
        int dough = 6;
        int leav_ag = 2;
        int egg = 2;
        int milk = 3;

        printf(" Dough: %d\n", dough * batch);
        printf(" Leavening Agent: %d\n", leav_ag * batch);
        printf(" Egg: %d\n", egg * batch);
        printf(" Milk: %d\n", milk * batch);
}

void special_carrot_juice(int batch)
{
        int special_carrot = 1;
        int flour = 3;
        int sugar = 3;
        int min_water = 4;

        printf(" Special Carrot: %d\n", special_carrot * batch);
        printf(" Flour: %d\n", flour * batch);
        printf(" Sugar: %d\n", sugar * batch);
        printf(" Mineral Water: %d\n", min_water * batch);
}

void steak(int batch)
{
        int meat = 8;
        int salt = 2;
        int garlic = 2;
        int red_sauce = 2;

        printf(" Meat: %d\n", meat * batch);
        printf(" Salt: %d\n", salt * batch);
        printf(" Garlic: %d\n", garlic * batch);
        printf(" Red Sauce: %d\n", red_sauce * batch);
}

void steamed_bird(int batch)
{
        int bird_meat = 5;
        int vegetables = 3;
        int vinegar = 2;
        int essence_liquor = 2;

        printf(" Bird Meat: %d\n", bird_meat * batch);
        printf(" Vegetables: %d\n", vegetables * batch);
        printf(" Vinegar: %d\n", vinegar * batch);
        printf(" Essence of Liquor: %d\n", essence_liquor * batch);
}

void steamed_seafood(int batch)
{
        int seafood = 2;
        int hot_pepper = 3;
        int min_water = 6;
        int salt = 2;

        printf(" Seafood: %d\n", seafood * batch);
        printf(" Hot Pepper: %d\n", hot_pepper * batch);
        printf(" Mineral Water: %d\n", min_water * batch);
        printf(" Salt: %d\n", salt * batch);
}

void stir_fried_meat(int batch)
{
        int meat = 7;
        int base_sauce = 2;
        int onion = 2;
        int hot_pepper = 3;

        printf(" Meat: %d\n", meat * batch);
        printf(" Base Sauce: %d\n", base_sauce * batch);
        printf(" Onion: %d\n", onion * batch);
        printf(" Hot Pepper: %d\n", hot_pepper * batch);
}

void tea_fine_scent(int batch)
{
        int plants = 4;
        int fruit = 4;
        int min_water = 7;
        int cooking_honey = 3;

        printf(" Plants: %d\n", plants * batch);
        printf(" Fruit: %d\n", fruit * batch);
        printf(" Mineral Water: %d\n", min_water * batch);
        printf(" Cooking Honey: %d\n", cooking_honey * batch);
}

void white_sauce(int batch)
{
        int base_sauce = 1;
        int milk = 1;
        int fruit = 1;
        int cooking_wine = 2;

        printf(" Base Sauce: %d\n", base_sauce * batch);
        printf(" Milk: %d\n", milk * batch);
        printf(" Fruit: %d\n", fruit * batch);
        printf(" Cooking Wine: %d\n", cooking_wine * batch);
}

//Skilled recipes
void balenos_special(int batch)
{
        int cheese_gratin = 1;
        int meat_croquette = 1;
        int smoked_fish_steak = 1;
        int stir_fried_vegetables = 2;
        int beer = 2;

        printf(" Cheese Gratin: %d\n", cheese_gratin * batch);
        printf(" Meat Croquette: %d\n", meat_croquette * batch);
        printf(" Smoked Fish Steak: %d\n", smoked_fish_steak * batch);
        printf(" Stir-Fried Vegetables: %d\n", stir_fried_vegetables * batch);
        printf(" Beer: %d\n", beer * batch);
}

void calpheon_special(int batch)
{
        int soft_bread = 2;
        int milk_tea = 1;
        int fish_fillet_salad = 1;
        int cheese_pie = 1;
        int meat_pasta = 1;

        printf(" Soft Bread: %d\n", soft_bread * batch);
        printf(" Milk Tea: %d\n", milk_tea * batch);
        printf(" Fish Fillet Salad: %d\n", fish_fillet_salad * batch);
        printf(" Cheese Pie: %d\n", cheese_pie * batch);
        printf(" Meat Pasta: %d\n", meat_pie * batch);
}

void cheese_pie(int batch)
{
        int dough = 4;
        int cheese = 7;
        int butter = 3;
        int egg = 3;

        printf(" Dough: %d\n", dough * batch);
        printf(" Cheese: %d\n", cheese * batch);
        printf(" Butter: %d\n", butter * batch);
        printf(" Egg: %d\n", egg * batch);
}

void dark_pudding(int batch)
{
        int oatmeal = 1;
        int pickled_vegetables = 1;
        int bird_meat = 5;
        int deer_blood = 7;

        printf(" Oatmeal: %d\n", oatmeal * batch);
        printf(" Pickled Vegetables: %d\n", pickled_vegetables * batch);
        printf(" Bird Meat: %d\n", bird_meat * batch);
        pirntf(" Deer Blood: %d\n", deer_blood * batch);
}

void lean_meat_salad(int batch)
{
        int meat = 8;
        int vinegar = 2;
        int pepper = 3;
        int dressing = 4;

        printf(" Meat: %d\n", meat * batch);
        printf(" Vinegar: %d\n", vinegar * batch);
        printf(" Pepper: %d\n", pepper * batch);
        printf(" Dressing: %d\n", dressing * batch);
}

void meat_croquette(int batch)
{
        int meat = 8;
        int flour = 5;
        int egg = 2;
        int cheese = 2;
        int deep_frying_oil = 4;

        printf(" Meat: %d\n", meat * batch);
        printf(" Flour: %d\n", flour * batch);
        printf(" Egg: %d\n", egg * batch);
        printf(" Cheese: %d\n", cheese * batch);
        printf(" Deep Frying Oil: %d\n", deep_frying_oil * batch);
}

void meat_sandwich(int batch)
{
        int soft_bread = 1;
        int meat = 7;
        int vegetables = 6;
        int cheese = 3;

        printf(" Soft Bread: %d\n", soft_bread * batch);
        printf(" Meat: %d\n", meat * batch);
        printf(" Vegetables: %d\n", vegetables * batch);
        printf(" Cheese: %d\n", cheese * batch);
}

int main()
{
        int x;
        int batch;

//recipe list
        printf(" What do you want to craft?\n");
        printf(" Beginner recipes:\n");
        printf(" 1. Aloe Cookie\n");
        printf(" 2. Aloe Yogurt\n");
        printf(" 3. Beer\n");
        printf(" 4. Boiled Bird Eggs\n");
        printf(" 5. Dressing\n");
        printf(" 6. Essence of Liquor\n");
        printf(" 7. Exotic Herbal Wine\n");
        printf(" 8. Fried Fish\n");
        printf(" 9. Fried Vegetables\n");
        printf(" 10. Fruit Juice\n");
        printf(" 11. Fruit Pudding\n");
        printf(" 12. Grain Soup\n");
        printf(" 13. Grilled Sausage\n");
        printf(" 14. Meat Soup\n");
        printf(" 15. Meat Stew\n");
        printf(" 16. Red Sauce\n");
        printf(" 17. Seafood Grilled Butter\n");
        printf(" 18. Seafood Mushroom Salad\n");
        printf(" 19. Steamed Fish\n");
        printf(" 20. Stir-Fried Seafood\n");
        printf(" 21. Stir-Fried Vegetables\n");
        printf(" 22. Vinegar\n");

        printf(" Apprentice recipes:\n");
        printf(" 23. Beehive Cookie (Cooking Honey) A\n");
        printf(" 24. Beehive Cookie (Wild Beehive) B\n");
        printf(" 25. Cheese Gratin\n");
        printf(" 26. Fish Fillet Salad\n");
        printf(" 27. Fish Fillet Chip\n");
        printf(" 28. Fish Soup\n");
        printf(" 29. Fried Bird\n");
        printf(" 30. Fruit and Vegetable Salad\n");
        printf(" 31. Fruit Pie\n");
        printf(" 32. Fruit Wine\n");
        printf(" 33. Good Feed\n");
        printf(" 34. High-Quality Carrot Juice\n");
        printf(" 35. Honey Wine\n");
        printf(" 36. Lizard Kebab\n");
        printf(" 37. Meat Pasta\n");
        printf(" 38. Meat Pie\n");
        printf(" 39. Oatmeal\n");
        printf(" 40. Omelet\n");
        printf(" 41. Organic Feed (Fish) A\n");
        printf(" 42. Organic Feed (Dried Fish) B\n");
        printf(" 43. Pickled Fish\n");
        printf(" 44. Pickled Vegetables\n");
        printf(" 45. Seafood Pasta\n");
        printf(" 46. Smoked Fish Steak\n");
        printf(" 47. Soft Bread\n");
        printf(" 48. Special Carrot Juice\n");
        printf(" 49. Steak\n");
        printf(" 50. Steamed Bird\n");
        printf(" 51. Steamed Seafood\n");
        printf(" 52. Stir-Fried Meat\n");
        printf(" 53. Tea With Fine scent\n");
        printf(" 54. White Sauce\n");

        scanf("%d", &x);

//batch input
        printf(" How many items would you like to craft?\n");
        scanf("%d", &batch);
        printf(" Ingredients required:\n");

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

        return 0;
}
