unsigned long binsearch(unsigned long nel, int (*compare)(unsigned long i)) 
{
        unsigned long long int low, high, mid;
	low = 0;
	high = nel - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (compare(mid) == 1) 
			high = mid - 1;
		else if (compare(mid) == -1) 
			low = mid + 1;
		else return mid;
  }
  return nel;
}