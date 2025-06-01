string intToRoman(int num) {   
        string Thousands[] = {"", "M", "MM", "MMM"};
        string Hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string Tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string Ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

        string th = Thousands[num/1000];
        string h = Hundreds[(num%1000)/100];
        string te = Tens[(num%100)/10];
        string o = Ones[(num%10)];

        return th+h+te+o;
    }