// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int right = size, left = 0, mid = (right + left) / 2;
int count = 0, i = 0;
while (right-left > 1)
{mid = (right + left) / 2;
if (arr[mid] > value)
right = mid;
else if (arr[mid] < value)
left = mid;
else if (arr[mid] == value)
{while (arr[mid + i] == value)
{count++;
i++;}
i = 1;
while (arr[mid - i] == value)
{count++;
i++;}
return count;}
}
return 0;}
