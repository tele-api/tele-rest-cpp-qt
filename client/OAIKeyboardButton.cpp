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

#include "OAIKeyboardButton.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIKeyboardButton::OAIKeyboardButton(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIKeyboardButton::OAIKeyboardButton() {
    this->initializeModel();
}

OAIKeyboardButton::~OAIKeyboardButton() {}

void OAIKeyboardButton::initializeModel() {

    m_text_isSet = false;
    m_text_isValid = false;

    m_request_users_isSet = false;
    m_request_users_isValid = false;

    m_request_chat_isSet = false;
    m_request_chat_isValid = false;

    m_request_contact_isSet = false;
    m_request_contact_isValid = false;

    m_request_location_isSet = false;
    m_request_location_isValid = false;

    m_request_poll_isSet = false;
    m_request_poll_isValid = false;

    m_web_app_isSet = false;
    m_web_app_isValid = false;
}

void OAIKeyboardButton::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIKeyboardButton::fromJsonObject(QJsonObject json) {

    m_text_isValid = ::tele_rest::fromJsonValue(m_text, json[QString("text")]);
    m_text_isSet = !json[QString("text")].isNull() && m_text_isValid;

    m_request_users_isValid = ::tele_rest::fromJsonValue(m_request_users, json[QString("request_users")]);
    m_request_users_isSet = !json[QString("request_users")].isNull() && m_request_users_isValid;

    m_request_chat_isValid = ::tele_rest::fromJsonValue(m_request_chat, json[QString("request_chat")]);
    m_request_chat_isSet = !json[QString("request_chat")].isNull() && m_request_chat_isValid;

    m_request_contact_isValid = ::tele_rest::fromJsonValue(m_request_contact, json[QString("request_contact")]);
    m_request_contact_isSet = !json[QString("request_contact")].isNull() && m_request_contact_isValid;

    m_request_location_isValid = ::tele_rest::fromJsonValue(m_request_location, json[QString("request_location")]);
    m_request_location_isSet = !json[QString("request_location")].isNull() && m_request_location_isValid;

    m_request_poll_isValid = ::tele_rest::fromJsonValue(m_request_poll, json[QString("request_poll")]);
    m_request_poll_isSet = !json[QString("request_poll")].isNull() && m_request_poll_isValid;

    m_web_app_isValid = ::tele_rest::fromJsonValue(m_web_app, json[QString("web_app")]);
    m_web_app_isSet = !json[QString("web_app")].isNull() && m_web_app_isValid;
}

QString OAIKeyboardButton::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIKeyboardButton::asJsonObject() const {
    QJsonObject obj;
    if (m_text_isSet) {
        obj.insert(QString("text"), ::tele_rest::toJsonValue(m_text));
    }
    if (m_request_users.isSet()) {
        obj.insert(QString("request_users"), ::tele_rest::toJsonValue(m_request_users));
    }
    if (m_request_chat.isSet()) {
        obj.insert(QString("request_chat"), ::tele_rest::toJsonValue(m_request_chat));
    }
    if (m_request_contact_isSet) {
        obj.insert(QString("request_contact"), ::tele_rest::toJsonValue(m_request_contact));
    }
    if (m_request_location_isSet) {
        obj.insert(QString("request_location"), ::tele_rest::toJsonValue(m_request_location));
    }
    if (m_request_poll.isSet()) {
        obj.insert(QString("request_poll"), ::tele_rest::toJsonValue(m_request_poll));
    }
    if (m_web_app.isSet()) {
        obj.insert(QString("web_app"), ::tele_rest::toJsonValue(m_web_app));
    }
    return obj;
}

QString OAIKeyboardButton::getText() const {
    return m_text;
}
void OAIKeyboardButton::setText(const QString &text) {
    m_text = text;
    m_text_isSet = true;
}

bool OAIKeyboardButton::is_text_Set() const{
    return m_text_isSet;
}

bool OAIKeyboardButton::is_text_Valid() const{
    return m_text_isValid;
}

OAIKeyboardButtonRequestUsers OAIKeyboardButton::getRequestUsers() const {
    return m_request_users;
}
void OAIKeyboardButton::setRequestUsers(const OAIKeyboardButtonRequestUsers &request_users) {
    m_request_users = request_users;
    m_request_users_isSet = true;
}

bool OAIKeyboardButton::is_request_users_Set() const{
    return m_request_users_isSet;
}

bool OAIKeyboardButton::is_request_users_Valid() const{
    return m_request_users_isValid;
}

OAIKeyboardButtonRequestChat OAIKeyboardButton::getRequestChat() const {
    return m_request_chat;
}
void OAIKeyboardButton::setRequestChat(const OAIKeyboardButtonRequestChat &request_chat) {
    m_request_chat = request_chat;
    m_request_chat_isSet = true;
}

bool OAIKeyboardButton::is_request_chat_Set() const{
    return m_request_chat_isSet;
}

bool OAIKeyboardButton::is_request_chat_Valid() const{
    return m_request_chat_isValid;
}

bool OAIKeyboardButton::isRequestContact() const {
    return m_request_contact;
}
void OAIKeyboardButton::setRequestContact(const bool &request_contact) {
    m_request_contact = request_contact;
    m_request_contact_isSet = true;
}

bool OAIKeyboardButton::is_request_contact_Set() const{
    return m_request_contact_isSet;
}

bool OAIKeyboardButton::is_request_contact_Valid() const{
    return m_request_contact_isValid;
}

bool OAIKeyboardButton::isRequestLocation() const {
    return m_request_location;
}
void OAIKeyboardButton::setRequestLocation(const bool &request_location) {
    m_request_location = request_location;
    m_request_location_isSet = true;
}

bool OAIKeyboardButton::is_request_location_Set() const{
    return m_request_location_isSet;
}

bool OAIKeyboardButton::is_request_location_Valid() const{
    return m_request_location_isValid;
}

OAIKeyboardButtonPollType OAIKeyboardButton::getRequestPoll() const {
    return m_request_poll;
}
void OAIKeyboardButton::setRequestPoll(const OAIKeyboardButtonPollType &request_poll) {
    m_request_poll = request_poll;
    m_request_poll_isSet = true;
}

bool OAIKeyboardButton::is_request_poll_Set() const{
    return m_request_poll_isSet;
}

bool OAIKeyboardButton::is_request_poll_Valid() const{
    return m_request_poll_isValid;
}

OAIWebAppInfo OAIKeyboardButton::getWebApp() const {
    return m_web_app;
}
void OAIKeyboardButton::setWebApp(const OAIWebAppInfo &web_app) {
    m_web_app = web_app;
    m_web_app_isSet = true;
}

bool OAIKeyboardButton::is_web_app_Set() const{
    return m_web_app_isSet;
}

bool OAIKeyboardButton::is_web_app_Valid() const{
    return m_web_app_isValid;
}

bool OAIKeyboardButton::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_text_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_request_users.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_request_chat.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_request_contact_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_request_location_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_request_poll.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_web_app.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIKeyboardButton::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_text_isValid && true;
}

} // namespace tele_rest
