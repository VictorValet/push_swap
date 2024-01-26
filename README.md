This repo hosts push_swap, a project from the common core of 42 School.

The objective of this project is to create a program that sorts numbers using two stacks, namely stack_a and stack_b. The sorting process involves a restricted set of movements, including swapping the top two numbers of the stacks, pushing the top number of one stack onto the other, and rotating or reverse rotating the stacks.

When executed, the program takes a set of distinct numbers within the range of INT_MAX and INT_MIN as arguments. It then outputs all the instructions (or movements) necessary to sort this set in ascending order.

The algorithm I developed produces results slightly surpassing the minimum requirements specified in the project. It operates by pushing all numbers into stack_b until stack_a is sorted, irrespective of whether it starts with the lowest number. Subsequently, it searches stack_b to identify the number requiring the fewest moves to be inserted into stack_a. This approach draws inspiration from the strategy outlined in this article: https://medium.com/@ayogun/push-swap-c1f5d2d41e97 .

The project relies on libft and ft_printf, which are previous projects from 42 common core.

If you're a 42 student and you're passing by, don't hesitate to take a look but don't copy paste it (as you would lose the opportunity to learn and may reproduce some of my code's flaws).
