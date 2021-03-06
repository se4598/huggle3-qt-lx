//This program is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.

//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.

#ifndef LOCALIZATION_HPP
#define LOCALIZATION_HPP

#include <QStringList>
#include <QString>
#include <QFile>
#include <QList>
#include <QMap>

namespace Huggle
{
    /*!
     * \brief The Language class is used to store localization data
     */
    class Language
    {
        public:
            //! Creates new instance of language
            //! param name Name of language
            Language(QString name);
            //! This is a short language name which is used by system
            QString LanguageName;
            //! Long identifier of language that is seen by user
            QString LanguageID;
            QMap<QString, QString> Messages;
    };

    //! This class is used to localize strings

    //! Huggle is using own localization system and usage of
    //! other 3rd localization system or libraries
    //! is strictly forbidden. Your commits that introduce
    //! those will be reverted mercillesly.
    class Localizations
    {
        public:
            static Localizations *HuggleLocalizations;

            Localizations();
            /*!
             * \brief Initializes a localization with given name
             *
             * This function will create a new localization object using built-in localization file
             * using Core::MakeLanguage() and insert that to language list
             * \param name Name of a localization that is a name of language without txt suffix in localization folder
             */
            void LocalInit(QString name);
            QString Localize(QString key);
            QString Localize(QString key, QStringList parameters);
            QString Localize(QString key, QString parameters);
            //! Languages
            QList<Language*> LocalizationData;
            //! Language selected by user this is only a language of interface
            QString PreferredLanguage;
        private:
            static Language *MakeLanguage(QString text, QString name);
    };
}

#endif // LOCALIZATION_HPP
