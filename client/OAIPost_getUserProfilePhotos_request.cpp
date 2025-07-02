/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T07:03:12.172160579Z[Etc/UTC]
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

#include "OAIPost_getUserProfilePhotos_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIPost_getUserProfilePhotos_request::OAIPost_getUserProfilePhotos_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPost_getUserProfilePhotos_request::OAIPost_getUserProfilePhotos_request() {
    this->initializeModel();
}

OAIPost_getUserProfilePhotos_request::~OAIPost_getUserProfilePhotos_request() {}

void OAIPost_getUserProfilePhotos_request::initializeModel() {

    m_user_id_isSet = false;
    m_user_id_isValid = false;

    m_offset_isSet = false;
    m_offset_isValid = false;

    m_limit_isSet = false;
    m_limit_isValid = false;
}

void OAIPost_getUserProfilePhotos_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPost_getUserProfilePhotos_request::fromJsonObject(QJsonObject json) {

    m_user_id_isValid = ::tele_rest::fromJsonValue(m_user_id, json[QString("user_id")]);
    m_user_id_isSet = !json[QString("user_id")].isNull() && m_user_id_isValid;

    m_offset_isValid = ::tele_rest::fromJsonValue(m_offset, json[QString("offset")]);
    m_offset_isSet = !json[QString("offset")].isNull() && m_offset_isValid;

    m_limit_isValid = ::tele_rest::fromJsonValue(m_limit, json[QString("limit")]);
    m_limit_isSet = !json[QString("limit")].isNull() && m_limit_isValid;
}

QString OAIPost_getUserProfilePhotos_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPost_getUserProfilePhotos_request::asJsonObject() const {
    QJsonObject obj;
    if (m_user_id_isSet) {
        obj.insert(QString("user_id"), ::tele_rest::toJsonValue(m_user_id));
    }
    if (m_offset_isSet) {
        obj.insert(QString("offset"), ::tele_rest::toJsonValue(m_offset));
    }
    if (m_limit_isSet) {
        obj.insert(QString("limit"), ::tele_rest::toJsonValue(m_limit));
    }
    return obj;
}

qint32 OAIPost_getUserProfilePhotos_request::getUserId() const {
    return m_user_id;
}
void OAIPost_getUserProfilePhotos_request::setUserId(const qint32 &user_id) {
    m_user_id = user_id;
    m_user_id_isSet = true;
}

bool OAIPost_getUserProfilePhotos_request::is_user_id_Set() const{
    return m_user_id_isSet;
}

bool OAIPost_getUserProfilePhotos_request::is_user_id_Valid() const{
    return m_user_id_isValid;
}

qint32 OAIPost_getUserProfilePhotos_request::getOffset() const {
    return m_offset;
}
void OAIPost_getUserProfilePhotos_request::setOffset(const qint32 &offset) {
    m_offset = offset;
    m_offset_isSet = true;
}

bool OAIPost_getUserProfilePhotos_request::is_offset_Set() const{
    return m_offset_isSet;
}

bool OAIPost_getUserProfilePhotos_request::is_offset_Valid() const{
    return m_offset_isValid;
}

qint32 OAIPost_getUserProfilePhotos_request::getLimit() const {
    return m_limit;
}
void OAIPost_getUserProfilePhotos_request::setLimit(const qint32 &limit) {
    m_limit = limit;
    m_limit_isSet = true;
}

bool OAIPost_getUserProfilePhotos_request::is_limit_Set() const{
    return m_limit_isSet;
}

bool OAIPost_getUserProfilePhotos_request::is_limit_Valid() const{
    return m_limit_isValid;
}

bool OAIPost_getUserProfilePhotos_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_offset_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_limit_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPost_getUserProfilePhotos_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_user_id_isValid && true;
}

} // namespace tele_rest
