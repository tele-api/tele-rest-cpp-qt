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

#include "OAI_setChatAdministratorCustomTitle_post_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAI_setChatAdministratorCustomTitle_post_request::OAI_setChatAdministratorCustomTitle_post_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAI_setChatAdministratorCustomTitle_post_request::OAI_setChatAdministratorCustomTitle_post_request() {
    this->initializeModel();
}

OAI_setChatAdministratorCustomTitle_post_request::~OAI_setChatAdministratorCustomTitle_post_request() {}

void OAI_setChatAdministratorCustomTitle_post_request::initializeModel() {

    m_chat_id_isSet = false;
    m_chat_id_isValid = false;

    m_user_id_isSet = false;
    m_user_id_isValid = false;

    m_custom_title_isSet = false;
    m_custom_title_isValid = false;
}

void OAI_setChatAdministratorCustomTitle_post_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAI_setChatAdministratorCustomTitle_post_request::fromJsonObject(QJsonObject json) {

    m_chat_id_isValid = ::tele_rest::fromJsonValue(m_chat_id, json[QString("chat_id")]);
    m_chat_id_isSet = !json[QString("chat_id")].isNull() && m_chat_id_isValid;

    m_user_id_isValid = ::tele_rest::fromJsonValue(m_user_id, json[QString("user_id")]);
    m_user_id_isSet = !json[QString("user_id")].isNull() && m_user_id_isValid;

    m_custom_title_isValid = ::tele_rest::fromJsonValue(m_custom_title, json[QString("custom_title")]);
    m_custom_title_isSet = !json[QString("custom_title")].isNull() && m_custom_title_isValid;
}

QString OAI_setChatAdministratorCustomTitle_post_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAI_setChatAdministratorCustomTitle_post_request::asJsonObject() const {
    QJsonObject obj;
    if (m_chat_id.isSet()) {
        obj.insert(QString("chat_id"), ::tele_rest::toJsonValue(m_chat_id));
    }
    if (m_user_id_isSet) {
        obj.insert(QString("user_id"), ::tele_rest::toJsonValue(m_user_id));
    }
    if (m_custom_title_isSet) {
        obj.insert(QString("custom_title"), ::tele_rest::toJsonValue(m_custom_title));
    }
    return obj;
}

OAI_restrictChatMember_post_request_chat_id OAI_setChatAdministratorCustomTitle_post_request::getChatId() const {
    return m_chat_id;
}
void OAI_setChatAdministratorCustomTitle_post_request::setChatId(const OAI_restrictChatMember_post_request_chat_id &chat_id) {
    m_chat_id = chat_id;
    m_chat_id_isSet = true;
}

bool OAI_setChatAdministratorCustomTitle_post_request::is_chat_id_Set() const{
    return m_chat_id_isSet;
}

bool OAI_setChatAdministratorCustomTitle_post_request::is_chat_id_Valid() const{
    return m_chat_id_isValid;
}

qint32 OAI_setChatAdministratorCustomTitle_post_request::getUserId() const {
    return m_user_id;
}
void OAI_setChatAdministratorCustomTitle_post_request::setUserId(const qint32 &user_id) {
    m_user_id = user_id;
    m_user_id_isSet = true;
}

bool OAI_setChatAdministratorCustomTitle_post_request::is_user_id_Set() const{
    return m_user_id_isSet;
}

bool OAI_setChatAdministratorCustomTitle_post_request::is_user_id_Valid() const{
    return m_user_id_isValid;
}

QString OAI_setChatAdministratorCustomTitle_post_request::getCustomTitle() const {
    return m_custom_title;
}
void OAI_setChatAdministratorCustomTitle_post_request::setCustomTitle(const QString &custom_title) {
    m_custom_title = custom_title;
    m_custom_title_isSet = true;
}

bool OAI_setChatAdministratorCustomTitle_post_request::is_custom_title_Set() const{
    return m_custom_title_isSet;
}

bool OAI_setChatAdministratorCustomTitle_post_request::is_custom_title_Valid() const{
    return m_custom_title_isValid;
}

bool OAI_setChatAdministratorCustomTitle_post_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_chat_id.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_custom_title_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAI_setChatAdministratorCustomTitle_post_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_chat_id_isValid && m_user_id_isValid && m_custom_title_isValid && true;
}

} // namespace tele_rest
