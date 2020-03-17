#ifndef PROFILE_H
#define PROFILE_H

#include <QString>
#include <cmath>
#include <QDebug>


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
    size_t getScore();
    int getSize();

private:
    profile();

    size_t score;

    QString name;
    QString breed;
    QString aboutParagraph;
    QString pictureName;

    int activity;
    int space;
    int interaction;
    int size;
    bool kids;
    bool otherAnimals;
};

#endif // PROFILE_H
