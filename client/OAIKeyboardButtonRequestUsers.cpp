/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
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

#include "OAIKeyboardButtonRequestUsers.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIKeyboardButtonRequestUsers::OAIKeyboardButtonRequestUsers(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIKeyboardButtonRequestUsers::OAIKeyboardButtonRequestUsers() {
    this->initializeModel();
}

OAIKeyboardButtonRequestUsers::~OAIKeyboardButtonRequestUsers() {}

void OAIKeyboardButtonRequestUsers::initializeModel() {

    m_request_id_isSet = false;
    m_request_id_isValid = false;

    m_user_is_bot_isSet = false;
    m_user_is_bot_isValid = false;

    m_user_is_premium_isSet = false;
    m_user_is_premium_isValid = false;

    m_max_quantity_isSet = false;
    m_max_quantity_isValid = false;

    m_request_name_isSet = false;
    m_request_name_isValid = false;

    m_request_username_isSet = false;
    m_request_username_isValid = false;

    m_request_photo_isSet = false;
    m_request_photo_isValid = false;
}

void OAIKeyboardButtonRequestUsers::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIKeyboardButtonRequestUsers::fromJsonObject(QJsonObject json) {

    m_request_id_isValid = ::tele_rest::fromJsonValue(m_request_id, json[QString("request_id")]);
    m_request_id_isSet = !json[QString("request_id")].isNull() && m_request_id_isValid;

    m_user_is_bot_isValid = ::tele_rest::fromJsonValue(m_user_is_bot, json[QString("user_is_bot")]);
    m_user_is_bot_isSet = !json[QString("user_is_bot")].isNull() && m_user_is_bot_isValid;

    m_user_is_premium_isValid = ::tele_rest::fromJsonValue(m_user_is_premium, json[QString("user_is_premium")]);
    m_user_is_premium_isSet = !json[QString("user_is_premium")].isNull() && m_user_is_premium_isValid;

    m_max_quantity_isValid = ::tele_rest::fromJsonValue(m_max_quantity, json[QString("max_quantity")]);
    m_max_quantity_isSet = !json[QString("max_quantity")].isNull() && m_max_quantity_isValid;

    m_request_name_isValid = ::tele_rest::fromJsonValue(m_request_name, json[QString("request_name")]);
    m_request_name_isSet = !json[QString("request_name")].isNull() && m_request_name_isValid;

    m_request_username_isValid = ::tele_rest::fromJsonValue(m_request_username, json[QString("request_username")]);
    m_request_username_isSet = !json[QString("request_username")].isNull() && m_request_username_isValid;

    m_request_photo_isValid = ::tele_rest::fromJsonValue(m_request_photo, json[QString("request_photo")]);
    m_request_photo_isSet = !json[QString("request_photo")].isNull() && m_request_photo_isValid;
}

QString OAIKeyboardButtonRequestUsers::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIKeyboardButtonRequestUsers::asJsonObject() const {
    QJsonObject obj;
    if (m_request_id_isSet) {
        obj.insert(QString("request_id"), ::tele_rest::toJsonValue(m_request_id));
    }
    if (m_user_is_bot_isSet) {
        obj.insert(QString("user_is_bot"), ::tele_rest::toJsonValue(m_user_is_bot));
    }
    if (m_user_is_premium_isSet) {
        obj.insert(QString("user_is_premium"), ::tele_rest::toJsonValue(m_user_is_premium));
    }
    if (m_max_quantity_isSet) {
        obj.insert(QString("max_quantity"), ::tele_rest::toJsonValue(m_max_quantity));
    }
    if (m_request_name_isSet) {
        obj.insert(QString("request_name"), ::tele_rest::toJsonValue(m_request_name));
    }
    if (m_request_username_isSet) {
        obj.insert(QString("request_username"), ::tele_rest::toJsonValue(m_request_username));
    }
    if (m_request_photo_isSet) {
        obj.insert(QString("request_photo"), ::tele_rest::toJsonValue(m_request_photo));
    }
    return obj;
}

qint32 OAIKeyboardButtonRequestUsers::getRequestId() const {
    return m_request_id;
}
void OAIKeyboardButtonRequestUsers::setRequestId(const qint32 &request_id) {
    m_request_id = request_id;
    m_request_id_isSet = true;
}

bool OAIKeyboardButtonRequestUsers::is_request_id_Set() const{
    return m_request_id_isSet;
}

bool OAIKeyboardButtonRequestUsers::is_request_id_Valid() const{
    return m_request_id_isValid;
}

bool OAIKeyboardButtonRequestUsers::isUserIsBot() const {
    return m_user_is_bot;
}
void OAIKeyboardButtonRequestUsers::setUserIsBot(const bool &user_is_bot) {
    m_user_is_bot = user_is_bot;
    m_user_is_bot_isSet = true;
}

bool OAIKeyboardButtonRequestUsers::is_user_is_bot_Set() const{
    return m_user_is_bot_isSet;
}

bool OAIKeyboardButtonRequestUsers::is_user_is_bot_Valid() const{
    return m_user_is_bot_isValid;
}

bool OAIKeyboardButtonRequestUsers::isUserIsPremium() const {
    return m_user_is_premium;
}
void OAIKeyboardButtonRequestUsers::setUserIsPremium(const bool &user_is_premium) {
    m_user_is_premium = user_is_premium;
    m_user_is_premium_isSet = true;
}

bool OAIKeyboardButtonRequestUsers::is_user_is_premium_Set() const{
    return m_user_is_premium_isSet;
}

bool OAIKeyboardButtonRequestUsers::is_user_is_premium_Valid() const{
    return m_user_is_premium_isValid;
}

qint32 OAIKeyboardButtonRequestUsers::getMaxQuantity() const {
    return m_max_quantity;
}
void OAIKeyboardButtonRequestUsers::setMaxQuantity(const qint32 &max_quantity) {
    m_max_quantity = max_quantity;
    m_max_quantity_isSet = true;
}

bool OAIKeyboardButtonRequestUsers::is_max_quantity_Set() const{
    return m_max_quantity_isSet;
}

bool OAIKeyboardButtonRequestUsers::is_max_quantity_Valid() const{
    return m_max_quantity_isValid;
}

bool OAIKeyboardButtonRequestUsers::isRequestName() const {
    return m_request_name;
}
void OAIKeyboardButtonRequestUsers::setRequestName(const bool &request_name) {
    m_request_name = request_name;
    m_request_name_isSet = true;
}

bool OAIKeyboardButtonRequestUsers::is_request_name_Set() const{
    return m_request_name_isSet;
}

bool OAIKeyboardButtonRequestUsers::is_request_name_Valid() const{
    return m_request_name_isValid;
}

bool OAIKeyboardButtonRequestUsers::isRequestUsername() const {
    return m_request_username;
}
void OAIKeyboardButtonRequestUsers::setRequestUsername(const bool &request_username) {
    m_request_username = request_username;
    m_request_username_isSet = true;
}

bool OAIKeyboardButtonRequestUsers::is_request_username_Set() const{
    return m_request_username_isSet;
}

bool OAIKeyboardButtonRequestUsers::is_request_username_Valid() const{
    return m_request_username_isValid;
}

bool OAIKeyboardButtonRequestUsers::isRequestPhoto() const {
    return m_request_photo;
}
void OAIKeyboardButtonRequestUsers::setRequestPhoto(const bool &request_photo) {
    m_request_photo = request_photo;
    m_request_photo_isSet = true;
}

bool OAIKeyboardButtonRequestUsers::is_request_photo_Set() const{
    return m_request_photo_isSet;
}

bool OAIKeyboardButtonRequestUsers::is_request_photo_Valid() const{
    return m_request_photo_isValid;
}

bool OAIKeyboardButtonRequestUsers::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_request_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_is_bot_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_is_premium_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_quantity_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_request_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_request_username_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_request_photo_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIKeyboardButtonRequestUsers::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_request_id_isValid && true;
}

} // namespace tele_rest
