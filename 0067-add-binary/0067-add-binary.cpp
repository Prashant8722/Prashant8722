class Solution {
public:
    string addBinary(string A, string B) {
             int i = A.length() - 1;
        int j = B.length() - 1;
        int carry = 0;
        std::string result;

        while (i >= 0 || j >= 0 || carry > 0) {
            int sum = carry;

            if (i >= 0) {
                sum += A[i] - '0';
                i--;
            }
            if (j >= 0) {
                sum += B[j] - '0';
                j--;
            }

            result = std::to_string(sum % 2) + result;
            carry = sum / 2;
        }
size_t pos = result.find_first_not_of('0');
        if (pos != std::string::npos) {
            result = result.substr(pos);
        } else {
            result = "0";
        }
        return result;
    }
};