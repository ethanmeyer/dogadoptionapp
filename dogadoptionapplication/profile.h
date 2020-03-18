#ifndef PROFILE_H
#define PROFILE_H

#include <QString>
#include <cmath>
#include <QDebug>


class profile
{
public:
    profile(QString pname, QString pbreed, QString pabout, QString ppicture, size_t pactivity, size_t pspace,
                size_t pinteraction, size_t psize, bool pkids, bool panimals, QString psex, size_t page);
    ~profile();

    void CompareProfiles(profile &);
    QString getName();
    QString getBreed();
    QString getDescription();
    QString getPicture();
    QString getSex();
    size_t getScore();
    int getSize();
    int getAge();

private:
    profile();

    size_t score;

    QString name, breed, aboutParagraph, pictureName, sex;
    int activity, space, interaction, size, age;
    bool kids, otherAnimals;
};

#endif // PROFILE_H
