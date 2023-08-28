# Struct, typdef
Project redo.

## Notes on task 4: 4-new_dog.c
The age member is of type float, which is a primitive data type in C
Unlike strings (character arrays), floats don't have variable 
lengths, and they don't require memory allocation for the data 
they hold.
When the dog_t structure is allocated using malloc, the memory for 
the age member is already allocated as part of that structure.

-> On the use of malloc() and free() in the code
https://chat.openai.com/share/998d409e-05e0-43b4-a1d3-fa84bde540ae

## How 5-free_dog.c works
https://chat.openai.com/share/fbcf7616-f42d-4283-99d0-73dda4f4198e
