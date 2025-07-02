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

#include "OAISendContactRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAISendContactRequest::OAISendContactRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISendContactRequest::OAISendContactRequest() {
    this->initializeModel();
}

OAISendContactRequest::~OAISendContactRequest() {}

void OAISendContactRequest::initializeModel() {

    m_chat_id_isSet = false;
    m_chat_id_isValid = false;

    m_phone_number_isSet = false;
    m_phone_number_isValid = false;

    m_first_name_isSet = false;
    m_first_name_isValid = false;

    m_business_connection_id_isSet = false;
    m_business_connection_id_isValid = false;

    m_message_thread_id_isSet = false;
    m_message_thread_id_isValid = false;

    m_last_name_isSet = false;
    m_last_name_isValid = false;

    m_vcard_isSet = false;
    m_vcard_isValid = false;

    m_disable_notification_isSet = false;
    m_disable_notification_isValid = false;

    m_protect_content_isSet = false;
    m_protect_content_isValid = false;

    m_allow_paid_broadcast_isSet = false;
    m_allow_paid_broadcast_isValid = false;

    m_message_effect_id_isSet = false;
    m_message_effect_id_isValid = false;

    m_reply_parameters_isSet = false;
    m_reply_parameters_isValid = false;

    m_reply_markup_isSet = false;
    m_reply_markup_isValid = false;
}

void OAISendContactRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISendContactRequest::fromJsonObject(QJsonObject json) {

    m_chat_id_isValid = ::tele_rest::fromJsonValue(m_chat_id, json[QString("chat_id")]);
    m_chat_id_isSet = !json[QString("chat_id")].isNull() && m_chat_id_isValid;

    m_phone_number_isValid = ::tele_rest::fromJsonValue(m_phone_number, json[QString("phone_number")]);
    m_phone_number_isSet = !json[QString("phone_number")].isNull() && m_phone_number_isValid;

    m_first_name_isValid = ::tele_rest::fromJsonValue(m_first_name, json[QString("first_name")]);
    m_first_name_isSet = !json[QString("first_name")].isNull() && m_first_name_isValid;

    m_business_connection_id_isValid = ::tele_rest::fromJsonValue(m_business_connection_id, json[QString("business_connection_id")]);
    m_business_connection_id_isSet = !json[QString("business_connection_id")].isNull() && m_business_connection_id_isValid;

    m_message_thread_id_isValid = ::tele_rest::fromJsonValue(m_message_thread_id, json[QString("message_thread_id")]);
    m_message_thread_id_isSet = !json[QString("message_thread_id")].isNull() && m_message_thread_id_isValid;

    m_last_name_isValid = ::tele_rest::fromJsonValue(m_last_name, json[QString("last_name")]);
    m_last_name_isSet = !json[QString("last_name")].isNull() && m_last_name_isValid;

    m_vcard_isValid = ::tele_rest::fromJsonValue(m_vcard, json[QString("vcard")]);
    m_vcard_isSet = !json[QString("vcard")].isNull() && m_vcard_isValid;

    m_disable_notification_isValid = ::tele_rest::fromJsonValue(m_disable_notification, json[QString("disable_notification")]);
    m_disable_notification_isSet = !json[QString("disable_notification")].isNull() && m_disable_notification_isValid;

    m_protect_content_isValid = ::tele_rest::fromJsonValue(m_protect_content, json[QString("protect_content")]);
    m_protect_content_isSet = !json[QString("protect_content")].isNull() && m_protect_content_isValid;

    m_allow_paid_broadcast_isValid = ::tele_rest::fromJsonValue(m_allow_paid_broadcast, json[QString("allow_paid_broadcast")]);
    m_allow_paid_broadcast_isSet = !json[QString("allow_paid_broadcast")].isNull() && m_allow_paid_broadcast_isValid;

    m_message_effect_id_isValid = ::tele_rest::fromJsonValue(m_message_effect_id, json[QString("message_effect_id")]);
    m_message_effect_id_isSet = !json[QString("message_effect_id")].isNull() && m_message_effect_id_isValid;

    m_reply_parameters_isValid = ::tele_rest::fromJsonValue(m_reply_parameters, json[QString("reply_parameters")]);
    m_reply_parameters_isSet = !json[QString("reply_parameters")].isNull() && m_reply_parameters_isValid;

    m_reply_markup_isValid = ::tele_rest::fromJsonValue(m_reply_markup, json[QString("reply_markup")]);
    m_reply_markup_isSet = !json[QString("reply_markup")].isNull() && m_reply_markup_isValid;
}

QString OAISendContactRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISendContactRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_chat_id.isSet()) {
        obj.insert(QString("chat_id"), ::tele_rest::toJsonValue(m_chat_id));
    }
    if (m_phone_number_isSet) {
        obj.insert(QString("phone_number"), ::tele_rest::toJsonValue(m_phone_number));
    }
    if (m_first_name_isSet) {
        obj.insert(QString("first_name"), ::tele_rest::toJsonValue(m_first_name));
    }
    if (m_business_connection_id_isSet) {
        obj.insert(QString("business_connection_id"), ::tele_rest::toJsonValue(m_business_connection_id));
    }
    if (m_message_thread_id_isSet) {
        obj.insert(QString("message_thread_id"), ::tele_rest::toJsonValue(m_message_thread_id));
    }
    if (m_last_name_isSet) {
        obj.insert(QString("last_name"), ::tele_rest::toJsonValue(m_last_name));
    }
    if (m_vcard_isSet) {
        obj.insert(QString("vcard"), ::tele_rest::toJsonValue(m_vcard));
    }
    if (m_disable_notification_isSet) {
        obj.insert(QString("disable_notification"), ::tele_rest::toJsonValue(m_disable_notification));
    }
    if (m_protect_content_isSet) {
        obj.insert(QString("protect_content"), ::tele_rest::toJsonValue(m_protect_content));
    }
    if (m_allow_paid_broadcast_isSet) {
        obj.insert(QString("allow_paid_broadcast"), ::tele_rest::toJsonValue(m_allow_paid_broadcast));
    }
    if (m_message_effect_id_isSet) {
        obj.insert(QString("message_effect_id"), ::tele_rest::toJsonValue(m_message_effect_id));
    }
    if (m_reply_parameters.isSet()) {
        obj.insert(QString("reply_parameters"), ::tele_rest::toJsonValue(m_reply_parameters));
    }
    if (m_reply_markup.isSet()) {
        obj.insert(QString("reply_markup"), ::tele_rest::toJsonValue(m_reply_markup));
    }
    return obj;
}

OAISendMessageRequest_chat_id OAISendContactRequest::getChatId() const {
    return m_chat_id;
}
void OAISendContactRequest::setChatId(const OAISendMessageRequest_chat_id &chat_id) {
    m_chat_id = chat_id;
    m_chat_id_isSet = true;
}

bool OAISendContactRequest::is_chat_id_Set() const{
    return m_chat_id_isSet;
}

bool OAISendContactRequest::is_chat_id_Valid() const{
    return m_chat_id_isValid;
}

QString OAISendContactRequest::getPhoneNumber() const {
    return m_phone_number;
}
void OAISendContactRequest::setPhoneNumber(const QString &phone_number) {
    m_phone_number = phone_number;
    m_phone_number_isSet = true;
}

bool OAISendContactRequest::is_phone_number_Set() const{
    return m_phone_number_isSet;
}

bool OAISendContactRequest::is_phone_number_Valid() const{
    return m_phone_number_isValid;
}

QString OAISendContactRequest::getFirstName() const {
    return m_first_name;
}
void OAISendContactRequest::setFirstName(const QString &first_name) {
    m_first_name = first_name;
    m_first_name_isSet = true;
}

bool OAISendContactRequest::is_first_name_Set() const{
    return m_first_name_isSet;
}

bool OAISendContactRequest::is_first_name_Valid() const{
    return m_first_name_isValid;
}

QString OAISendContactRequest::getBusinessConnectionId() const {
    return m_business_connection_id;
}
void OAISendContactRequest::setBusinessConnectionId(const QString &business_connection_id) {
    m_business_connection_id = business_connection_id;
    m_business_connection_id_isSet = true;
}

bool OAISendContactRequest::is_business_connection_id_Set() const{
    return m_business_connection_id_isSet;
}

bool OAISendContactRequest::is_business_connection_id_Valid() const{
    return m_business_connection_id_isValid;
}

qint32 OAISendContactRequest::getMessageThreadId() const {
    return m_message_thread_id;
}
void OAISendContactRequest::setMessageThreadId(const qint32 &message_thread_id) {
    m_message_thread_id = message_thread_id;
    m_message_thread_id_isSet = true;
}

bool OAISendContactRequest::is_message_thread_id_Set() const{
    return m_message_thread_id_isSet;
}

bool OAISendContactRequest::is_message_thread_id_Valid() const{
    return m_message_thread_id_isValid;
}

QString OAISendContactRequest::getLastName() const {
    return m_last_name;
}
void OAISendContactRequest::setLastName(const QString &last_name) {
    m_last_name = last_name;
    m_last_name_isSet = true;
}

bool OAISendContactRequest::is_last_name_Set() const{
    return m_last_name_isSet;
}

bool OAISendContactRequest::is_last_name_Valid() const{
    return m_last_name_isValid;
}

QString OAISendContactRequest::getVcard() const {
    return m_vcard;
}
void OAISendContactRequest::setVcard(const QString &vcard) {
    m_vcard = vcard;
    m_vcard_isSet = true;
}

bool OAISendContactRequest::is_vcard_Set() const{
    return m_vcard_isSet;
}

bool OAISendContactRequest::is_vcard_Valid() const{
    return m_vcard_isValid;
}

bool OAISendContactRequest::isDisableNotification() const {
    return m_disable_notification;
}
void OAISendContactRequest::setDisableNotification(const bool &disable_notification) {
    m_disable_notification = disable_notification;
    m_disable_notification_isSet = true;
}

bool OAISendContactRequest::is_disable_notification_Set() const{
    return m_disable_notification_isSet;
}

bool OAISendContactRequest::is_disable_notification_Valid() const{
    return m_disable_notification_isValid;
}

bool OAISendContactRequest::isProtectContent() const {
    return m_protect_content;
}
void OAISendContactRequest::setProtectContent(const bool &protect_content) {
    m_protect_content = protect_content;
    m_protect_content_isSet = true;
}

bool OAISendContactRequest::is_protect_content_Set() const{
    return m_protect_content_isSet;
}

bool OAISendContactRequest::is_protect_content_Valid() const{
    return m_protect_content_isValid;
}

bool OAISendContactRequest::isAllowPaidBroadcast() const {
    return m_allow_paid_broadcast;
}
void OAISendContactRequest::setAllowPaidBroadcast(const bool &allow_paid_broadcast) {
    m_allow_paid_broadcast = allow_paid_broadcast;
    m_allow_paid_broadcast_isSet = true;
}

bool OAISendContactRequest::is_allow_paid_broadcast_Set() const{
    return m_allow_paid_broadcast_isSet;
}

bool OAISendContactRequest::is_allow_paid_broadcast_Valid() const{
    return m_allow_paid_broadcast_isValid;
}

QString OAISendContactRequest::getMessageEffectId() const {
    return m_message_effect_id;
}
void OAISendContactRequest::setMessageEffectId(const QString &message_effect_id) {
    m_message_effect_id = message_effect_id;
    m_message_effect_id_isSet = true;
}

bool OAISendContactRequest::is_message_effect_id_Set() const{
    return m_message_effect_id_isSet;
}

bool OAISendContactRequest::is_message_effect_id_Valid() const{
    return m_message_effect_id_isValid;
}

OAIReplyParameters OAISendContactRequest::getReplyParameters() const {
    return m_reply_parameters;
}
void OAISendContactRequest::setReplyParameters(const OAIReplyParameters &reply_parameters) {
    m_reply_parameters = reply_parameters;
    m_reply_parameters_isSet = true;
}

bool OAISendContactRequest::is_reply_parameters_Set() const{
    return m_reply_parameters_isSet;
}

bool OAISendContactRequest::is_reply_parameters_Valid() const{
    return m_reply_parameters_isValid;
}

OAISendMessageRequest_reply_markup OAISendContactRequest::getReplyMarkup() const {
    return m_reply_markup;
}
void OAISendContactRequest::setReplyMarkup(const OAISendMessageRequest_reply_markup &reply_markup) {
    m_reply_markup = reply_markup;
    m_reply_markup_isSet = true;
}

bool OAISendContactRequest::is_reply_markup_Set() const{
    return m_reply_markup_isSet;
}

bool OAISendContactRequest::is_reply_markup_Valid() const{
    return m_reply_markup_isValid;
}

bool OAISendContactRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_chat_id.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_phone_number_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_first_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_business_connection_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_thread_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_vcard_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_disable_notification_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_protect_content_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_allow_paid_broadcast_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_effect_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_reply_parameters.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_reply_markup.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISendContactRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_chat_id_isValid && m_phone_number_isValid && m_first_name_isValid && true;
}

} // namespace tele_rest
