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

void profile::CompareProfiles(profile &)
{

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

profile::profile()
{

}
