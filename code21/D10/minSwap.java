class Solution {
    public static void main(String[] args) {
        System.out.println(minNumSwapForPalin("asflkj"));
        System.out.println(minNumSwapForPalin("mamad"));
    }

    /**
     * Follow two pointer approach
     *  if char match
     *      adjust pointer
     *  else
     *      1) find matching pair and start swapping
     *      OR
     *      2) NO matching found,(Odd palindrome) just swap with adjacent
     *
     * @param str - Given string
     * @return - number of swaps required to make string palindrome.
     */
    public static int minNumSwapForPalin(String str) {
        if(str == null || str.length() == 0) return -1;
        int swaps = 0;

        if(isStringValid(str)) {
            int p1 = 0;
            int p2 = str.length()-1;
            char[] data = str.toCharArray();

            while(p1<=p2){
                if(data[p1] != data[p2]) {
                    int k = p2;
                    while(data[p1] != data[k] && k>p1) {
                        k--;
                    }

                    if(p1 == k) {
                        swap(data, p1, p1+1);
                        swaps++;
                    }
                    else{
                        while(k<p2) {
                            swap(data, k, k+1);
                            swaps++;
                            k++;
                        }
                        p1++;
                        p2--;
                    }
                }
                else{
                    p1++;
                    p2--;
                }
            }

            return swaps;
        }

        return -1;
    }

    public static void swap(char[] data, int x, int y) {
        char temp = data[x];
        data[x] = data[y];
        data[y] = temp;
    }
    /**
     * This will test if given string have all the possible character
     * for being a palindrome. Considering both even and odd palindrome.
     *
     * @param str - given string
     * @return boolean
     */
    public static boolean isStringValid(String str) {
        int[] countArr = new int[26];
        int oddCount = 0;

        for(int i=0; i<str.length(); i++) {
            countArr[str.charAt(i) - 'a']++;
        }

        for(int i=0; i<countArr.length; i++) {
            if(countArr[i] % 2 != 0){
                oddCount++;
            }
        }

        return oddCount <= 1;
    }
}

