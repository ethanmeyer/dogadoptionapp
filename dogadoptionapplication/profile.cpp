#include "profile.h"

profile::profile(QString pname, QString pbreed, QString pabout, QString ppicture, size_t pactivity, size_t pspace, size_t pinteraction, size_t psize, bool pkids, bool panimals)
{
    name = pname;
    breed = pbreed;
    aboutParagraph = pabout;
    pictureName = ppicture;

    activity = pactivity;
    space = pspace;
    interaction = pinteraction;
    size = psize;
    kids = pkids;
    otherAnimals = panimals;
}

profile::profile(QString pname, QString pbreed, QString pabout, QString ppicture, size_t pactivity, size_t pspace, size_t pinteraction, size_t psize, bool pkids, bool panimals, size_t pscore)
{
    name = pname;
    breed = pbreed;
    aboutParagraph = pabout;
    pictureName = ppicture;
    activity = pactivity;
    space = pspace;
    interaction = pinteraction;
    size = psize;
    kids = pkids;
    otherAnimals = panimals;
    score = pscore;
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

size_t profile::getScore()
{
    return score;
}

profile::profile()
{

}
