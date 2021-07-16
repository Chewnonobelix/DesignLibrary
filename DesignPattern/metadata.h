#ifndef METADATA_H
#define METADATA_H

#include <QJsonObject>
#include <QMap>
#include <QVariant>

class MetaData
{
private:
    QMap<QString, QVariant> m_metadata;

public:
    MetaData() = default;
    MetaData(const MetaData&) = default;
    MetaData(const QJsonObject &);
    virtual ~MetaData() = default;
    MetaData& operator =(const MetaData&) = default;

    bool hasMetadata(QString name) const;
    int metaDataCount() const;
    QStringList metadataList() const;

    template<class T>
    T& metaData(QString name) const
    {
        static T ret;
        if(hasMetadata(name)) {
            static T find;
            find = m_metadata[name].value<T>();
            return find;
        }
        else
            return ret;
    }

    template<class T>
    void setMetadata(QString name, T value)
    {
        m_metadata[name] = QVariant::fromValue(value);
    }

    void removeMetadata(QString);

    virtual operator QJsonObject() const;
};

#endif // METADATA_H
