

unsigned int grayToBinary(unsigned int num)
{
  unsigned int mask;
    for (mask = num >> 1; mask != 0; mask = mask >> 1)
    {
        num = num ^ mask;
    }
    return num;
}
unsigned int grayToBinary(unsigned int num)
{
  return (num >> 1) ^ num;
}
