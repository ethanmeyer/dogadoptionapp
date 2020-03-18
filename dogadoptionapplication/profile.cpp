#include "profile.h"

profile::profile(QString pname, QString pbreed, QString pabout, QString ppicture, size_t pactivity, size_t pspace, size_t pinteraction, size_t psize, bool pkids, bool panimals, QString psex, size_t page)
{
    name = pname;
    breed = pbreed;
    aboutParagraph = pabout;
    pictureName = ppicture;
    sex = psex;

    activity = pactivity;
    space = pspace;
    interaction = pinteraction;
    size = psize;
    kids = pkids;
    otherAnimals = panimals;
    age = page;
}

profile::~profile()
{

}

void profile::CompareProfiles(profile &compareTo)
{
    size_t total = 0;
    int compsize;
    int compinteraction;
    int compspace;
    int compactivity;

    if(otherAnimals == compareTo.otherAnimals){
        total+=1;
    }

    if(kids == compareTo.kids){
        total+=1;
    }

    compsize = abs(size - compareTo.size);
    switch(compsize){
        case 0:
            total += 2;
            break;
        case 1:
            total += 1;
            break;
        default:
            break;
    }

    compinteraction = abs(interaction - compareTo.interaction);
    switch(compinteraction){
        case 0:
            total += 3;
            break;
        case 1:
            total += 2;
            break;
        case 2:
            total += 1;
            break;
        default:
            break;
    }

    compspace = abs(space - compareTo.space);
    switch(compspace){
            case 0:
                total += 3;
                break;
            case 1:
                total += 2;
                break;
            case 2:
                total += 1;
                break;
            default:
                break;
    }

    compactivity = abs(activity - compareTo.activity);
    switch(compactivity){
        case 0:
            total += 3;
            break;
        case 1:
            total += 2;
            break;
        case 2:
            total += 1;
            break;
        default:
            break;
    }

    score = total;
}

QString profile::getName()
{
    return name;
}

QString profile::getBreed()
{
    return breed;
}

QString profile::getDescription()
{
    return aboutParagraph;
}

QString profile::getPicture()
{
    return pictureName;
}

QString profile::getSex()
{
    return sex;
}

size_t profile::getScore()
{
    return score;
}

int profile::getSize()
{
    return size;
}

int profile::getAge()
{
    return age;
}

profile::profile()
{

}
