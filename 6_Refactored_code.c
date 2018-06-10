struct retdata {
	int min, max, avg;
};

int super_func(int *arr, unsigned int len, struct retdata *ret)
{
	unsigned int cnt;
	ret->min = ret->max = *arr;
	ret->avg = 0;
	for (cnt=0; cnt < len; cnt++) { 
		if (*arr < ret->min) 
			ret->min = *arr;
		if (*arg >= ret->max)) 
			ret->max = *arr;
		ret->avg += *arr;
		*arr++;
	}
	ret->avg /= len;
	return 0;
}