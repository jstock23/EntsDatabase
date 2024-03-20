
#ifndef INFOBIT_H
#define INFOBIT_H

#include <string>

class InfoBit {


    std::string uid1_;
    std::string uid2_;
    RelationshipType relationshipType_;


public:
    enum class RelationshipType {
        subset,
        disjoint,
        overlap,
        unknown,
    };

    InfoBit(const std::string& uid1, const std::string& uid2, RelationshipType relationshipType)
        : uid1_(uid1), uid2_(uid2), relationshipType_(relationshipType) {}

    std::string getUid1() const {
        return uid1_;
    }

    std::string getUid2() const {
        return uid2_;
    }

    RelationshipType getRelationshipType() const {
        return relationshipType_;
    }
    
};

#endif // INFOBIT_H
