class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        unordered_map<int, pair<int, int>> pairsMap; // {spells[i], {idx, numPair}}

        // Copy spells into numPairs
        vector<int> numPairs(spells); // O(n)
        
        // Add each number into the map
        for(int i = 0; i < spells.size(); i++) { // O(n)
            pairsMap[spells[i]] = {i, -1};
        }

        // Sort both spells and potion
        sort(spells.begin(), spells.end()); // O(n log n)
        sort(potions.begin(), potions.end()); // O(m log m)

        // Two pointer approach
        // Spell pointer starts from the left
        // Potion pointer starts from the right
        int potionPtr = potions.size() - 1;
        for(int i = 0; i < spells.size(); i++) { // O(m)
            int spell = spells[i];
            while(potionPtr >= 0 && (long long) spell * potions[potionPtr] >= success) {
                potionPtr--;
            }
            pairsMap[spell] = {pairsMap[spell].first, potions.size() - 1 - potionPtr};
        }

        // Put data into vector
        int idx = 0;
        for(int spell: numPairs) { // O(n)
            numPairs[idx++] = pairsMap[spell].second;
        }

        return numPairs;
        
    }
};