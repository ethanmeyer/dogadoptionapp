#ifndef PROFILE_H
#define PROFILE_H

#include <QString>


class profile
{
public:
    profile(QString pname, QString pbreed, QString pabout, QString ppicture, size_t pactivity, size_t pspace,
                size_t pinteraction, size_t psize, bool pkids, bool panimals);
    profile(QString pname, QString pbreed, QString pabout, QString ppicture, size_t pactivity, size_t pspace,
                size_t pinteraction, size_t psize, bool pkids, bool panimals, size_t pscore);
    ~profile();

    void CompareProfiles(profile &);
    QString getName();
    QString getBreed();
    QString getDescription();
    QString getPicture();

private:
    profile();

    size_t score;

    QString name;
    QString breed;
    QString aboutParagraph;
    QString pictureName;

    size_t activity;
    size_t space;
    size_t interaction;
    size_t size;
    bool kids;
    bool otherAnimals;
};

#endif // PROFILE_H
