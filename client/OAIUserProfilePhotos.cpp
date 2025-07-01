/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIUserProfilePhotos.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIUserProfilePhotos::OAIUserProfilePhotos(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUserProfilePhotos::OAIUserProfilePhotos() {
    this->initializeModel();
}

OAIUserProfilePhotos::~OAIUserProfilePhotos() {}

void OAIUserProfilePhotos::initializeModel() {

    m_total_count_isSet = false;
    m_total_count_isValid = false;

    m_photos_isSet = false;
    m_photos_isValid = false;
}

void OAIUserProfilePhotos::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUserProfilePhotos::fromJsonObject(QJsonObject json) {

    m_total_count_isValid = ::tele_rest::fromJsonValue(m_total_count, json[QString("total_count")]);
    m_total_count_isSet = !json[QString("total_count")].isNull() && m_total_count_isValid;

    if(json["photos"].isArray()){
        auto arr = json["photos"].toArray();
        m_photos_isValid = true;
        if(arr.count() > 0) {
            for (const QJsonValue jval : arr) {
                QList<OAIPhotoSize> item;
                m_photos_isValid &= ::tele_rest::fromJsonValue(item, jval);
                m_photos_isSet = !jval.isNull() && m_photos_isValid;
                m_photos.push_back(item);
            }
        }
    }
}

QString OAIUserProfilePhotos::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUserProfilePhotos::asJsonObject() const {
    QJsonObject obj;
    if (m_total_count_isSet) {
        obj.insert(QString("total_count"), ::tele_rest::toJsonValue(m_total_count));
    }
    if (m_photos.size() > 0) {
        
        obj.insert(QString("photos"), toJsonValue(m_photos));
    }
    return obj;
}

qint32 OAIUserProfilePhotos::getTotalCount() const {
    return m_total_count;
}
void OAIUserProfilePhotos::setTotalCount(const qint32 &total_count) {
    m_total_count = total_count;
    m_total_count_isSet = true;
}

bool OAIUserProfilePhotos::is_total_count_Set() const{
    return m_total_count_isSet;
}

bool OAIUserProfilePhotos::is_total_count_Valid() const{
    return m_total_count_isValid;
}

QList<QList<OAIPhotoSize>> OAIUserProfilePhotos::getPhotos() const {
    return m_photos;
}
void OAIUserProfilePhotos::setPhotos(const QList<QList<OAIPhotoSize>> &photos) {
    m_photos = photos;
    m_photos_isSet = true;
}

bool OAIUserProfilePhotos::is_photos_Set() const{
    return m_photos_isSet;
}

bool OAIUserProfilePhotos::is_photos_Valid() const{
    return m_photos_isValid;
}

bool OAIUserProfilePhotos::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_total_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_photos.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUserProfilePhotos::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_total_count_isValid && m_photos_isValid && true;
}

} // namespace tele_rest
