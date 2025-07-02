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

#include "OAIInlineKeyboardButton.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIInlineKeyboardButton::OAIInlineKeyboardButton(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInlineKeyboardButton::OAIInlineKeyboardButton() {
    this->initializeModel();
}

OAIInlineKeyboardButton::~OAIInlineKeyboardButton() {}

void OAIInlineKeyboardButton::initializeModel() {

    m_text_isSet = false;
    m_text_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;

    m_callback_data_isSet = false;
    m_callback_data_isValid = false;

    m_web_app_isSet = false;
    m_web_app_isValid = false;

    m_login_url_isSet = false;
    m_login_url_isValid = false;

    m_switch_inline_query_isSet = false;
    m_switch_inline_query_isValid = false;

    m_switch_inline_query_current_chat_isSet = false;
    m_switch_inline_query_current_chat_isValid = false;

    m_switch_inline_query_chosen_chat_isSet = false;
    m_switch_inline_query_chosen_chat_isValid = false;

    m_copy_text_isSet = false;
    m_copy_text_isValid = false;

    m_callback_game_isSet = false;
    m_callback_game_isValid = false;

    m_pay_isSet = false;
    m_pay_isValid = false;
}

void OAIInlineKeyboardButton::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInlineKeyboardButton::fromJsonObject(QJsonObject json) {

    m_text_isValid = ::tele_rest::fromJsonValue(m_text, json[QString("text")]);
    m_text_isSet = !json[QString("text")].isNull() && m_text_isValid;

    m_url_isValid = ::tele_rest::fromJsonValue(m_url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_callback_data_isValid = ::tele_rest::fromJsonValue(m_callback_data, json[QString("callback_data")]);
    m_callback_data_isSet = !json[QString("callback_data")].isNull() && m_callback_data_isValid;

    m_web_app_isValid = ::tele_rest::fromJsonValue(m_web_app, json[QString("web_app")]);
    m_web_app_isSet = !json[QString("web_app")].isNull() && m_web_app_isValid;

    m_login_url_isValid = ::tele_rest::fromJsonValue(m_login_url, json[QString("login_url")]);
    m_login_url_isSet = !json[QString("login_url")].isNull() && m_login_url_isValid;

    m_switch_inline_query_isValid = ::tele_rest::fromJsonValue(m_switch_inline_query, json[QString("switch_inline_query")]);
    m_switch_inline_query_isSet = !json[QString("switch_inline_query")].isNull() && m_switch_inline_query_isValid;

    m_switch_inline_query_current_chat_isValid = ::tele_rest::fromJsonValue(m_switch_inline_query_current_chat, json[QString("switch_inline_query_current_chat")]);
    m_switch_inline_query_current_chat_isSet = !json[QString("switch_inline_query_current_chat")].isNull() && m_switch_inline_query_current_chat_isValid;

    m_switch_inline_query_chosen_chat_isValid = ::tele_rest::fromJsonValue(m_switch_inline_query_chosen_chat, json[QString("switch_inline_query_chosen_chat")]);
    m_switch_inline_query_chosen_chat_isSet = !json[QString("switch_inline_query_chosen_chat")].isNull() && m_switch_inline_query_chosen_chat_isValid;

    m_copy_text_isValid = ::tele_rest::fromJsonValue(m_copy_text, json[QString("copy_text")]);
    m_copy_text_isSet = !json[QString("copy_text")].isNull() && m_copy_text_isValid;

    m_callback_game_isValid = ::tele_rest::fromJsonValue(m_callback_game, json[QString("callback_game")]);
    m_callback_game_isSet = !json[QString("callback_game")].isNull() && m_callback_game_isValid;

    m_pay_isValid = ::tele_rest::fromJsonValue(m_pay, json[QString("pay")]);
    m_pay_isSet = !json[QString("pay")].isNull() && m_pay_isValid;
}

QString OAIInlineKeyboardButton::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInlineKeyboardButton::asJsonObject() const {
    QJsonObject obj;
    if (m_text_isSet) {
        obj.insert(QString("text"), ::tele_rest::toJsonValue(m_text));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::tele_rest::toJsonValue(m_url));
    }
    if (m_callback_data_isSet) {
        obj.insert(QString("callback_data"), ::tele_rest::toJsonValue(m_callback_data));
    }
    if (m_web_app.isSet()) {
        obj.insert(QString("web_app"), ::tele_rest::toJsonValue(m_web_app));
    }
    if (m_login_url.isSet()) {
        obj.insert(QString("login_url"), ::tele_rest::toJsonValue(m_login_url));
    }
    if (m_switch_inline_query_isSet) {
        obj.insert(QString("switch_inline_query"), ::tele_rest::toJsonValue(m_switch_inline_query));
    }
    if (m_switch_inline_query_current_chat_isSet) {
        obj.insert(QString("switch_inline_query_current_chat"), ::tele_rest::toJsonValue(m_switch_inline_query_current_chat));
    }
    if (m_switch_inline_query_chosen_chat.isSet()) {
        obj.insert(QString("switch_inline_query_chosen_chat"), ::tele_rest::toJsonValue(m_switch_inline_query_chosen_chat));
    }
    if (m_copy_text.isSet()) {
        obj.insert(QString("copy_text"), ::tele_rest::toJsonValue(m_copy_text));
    }
    if (m_callback_game_isSet) {
        obj.insert(QString("callback_game"), ::tele_rest::toJsonValue(m_callback_game));
    }
    if (m_pay_isSet) {
        obj.insert(QString("pay"), ::tele_rest::toJsonValue(m_pay));
    }
    return obj;
}

QString OAIInlineKeyboardButton::getText() const {
    return m_text;
}
void OAIInlineKeyboardButton::setText(const QString &text) {
    m_text = text;
    m_text_isSet = true;
}

bool OAIInlineKeyboardButton::is_text_Set() const{
    return m_text_isSet;
}

bool OAIInlineKeyboardButton::is_text_Valid() const{
    return m_text_isValid;
}

QString OAIInlineKeyboardButton::getUrl() const {
    return m_url;
}
void OAIInlineKeyboardButton::setUrl(const QString &url) {
    m_url = url;
    m_url_isSet = true;
}

bool OAIInlineKeyboardButton::is_url_Set() const{
    return m_url_isSet;
}

bool OAIInlineKeyboardButton::is_url_Valid() const{
    return m_url_isValid;
}

QString OAIInlineKeyboardButton::getCallbackData() const {
    return m_callback_data;
}
void OAIInlineKeyboardButton::setCallbackData(const QString &callback_data) {
    m_callback_data = callback_data;
    m_callback_data_isSet = true;
}

bool OAIInlineKeyboardButton::is_callback_data_Set() const{
    return m_callback_data_isSet;
}

bool OAIInlineKeyboardButton::is_callback_data_Valid() const{
    return m_callback_data_isValid;
}

OAIWebAppInfo OAIInlineKeyboardButton::getWebApp() const {
    return m_web_app;
}
void OAIInlineKeyboardButton::setWebApp(const OAIWebAppInfo &web_app) {
    m_web_app = web_app;
    m_web_app_isSet = true;
}

bool OAIInlineKeyboardButton::is_web_app_Set() const{
    return m_web_app_isSet;
}

bool OAIInlineKeyboardButton::is_web_app_Valid() const{
    return m_web_app_isValid;
}

OAILoginUrl OAIInlineKeyboardButton::getLoginUrl() const {
    return m_login_url;
}
void OAIInlineKeyboardButton::setLoginUrl(const OAILoginUrl &login_url) {
    m_login_url = login_url;
    m_login_url_isSet = true;
}

bool OAIInlineKeyboardButton::is_login_url_Set() const{
    return m_login_url_isSet;
}

bool OAIInlineKeyboardButton::is_login_url_Valid() const{
    return m_login_url_isValid;
}

QString OAIInlineKeyboardButton::getSwitchInlineQuery() const {
    return m_switch_inline_query;
}
void OAIInlineKeyboardButton::setSwitchInlineQuery(const QString &switch_inline_query) {
    m_switch_inline_query = switch_inline_query;
    m_switch_inline_query_isSet = true;
}

bool OAIInlineKeyboardButton::is_switch_inline_query_Set() const{
    return m_switch_inline_query_isSet;
}

bool OAIInlineKeyboardButton::is_switch_inline_query_Valid() const{
    return m_switch_inline_query_isValid;
}

QString OAIInlineKeyboardButton::getSwitchInlineQueryCurrentChat() const {
    return m_switch_inline_query_current_chat;
}
void OAIInlineKeyboardButton::setSwitchInlineQueryCurrentChat(const QString &switch_inline_query_current_chat) {
    m_switch_inline_query_current_chat = switch_inline_query_current_chat;
    m_switch_inline_query_current_chat_isSet = true;
}

bool OAIInlineKeyboardButton::is_switch_inline_query_current_chat_Set() const{
    return m_switch_inline_query_current_chat_isSet;
}

bool OAIInlineKeyboardButton::is_switch_inline_query_current_chat_Valid() const{
    return m_switch_inline_query_current_chat_isValid;
}

OAISwitchInlineQueryChosenChat OAIInlineKeyboardButton::getSwitchInlineQueryChosenChat() const {
    return m_switch_inline_query_chosen_chat;
}
void OAIInlineKeyboardButton::setSwitchInlineQueryChosenChat(const OAISwitchInlineQueryChosenChat &switch_inline_query_chosen_chat) {
    m_switch_inline_query_chosen_chat = switch_inline_query_chosen_chat;
    m_switch_inline_query_chosen_chat_isSet = true;
}

bool OAIInlineKeyboardButton::is_switch_inline_query_chosen_chat_Set() const{
    return m_switch_inline_query_chosen_chat_isSet;
}

bool OAIInlineKeyboardButton::is_switch_inline_query_chosen_chat_Valid() const{
    return m_switch_inline_query_chosen_chat_isValid;
}

OAICopyTextButton OAIInlineKeyboardButton::getCopyText() const {
    return m_copy_text;
}
void OAIInlineKeyboardButton::setCopyText(const OAICopyTextButton &copy_text) {
    m_copy_text = copy_text;
    m_copy_text_isSet = true;
}

bool OAIInlineKeyboardButton::is_copy_text_Set() const{
    return m_copy_text_isSet;
}

bool OAIInlineKeyboardButton::is_copy_text_Valid() const{
    return m_copy_text_isValid;
}

QJsonValue OAIInlineKeyboardButton::getCallbackGame() const {
    return m_callback_game;
}
void OAIInlineKeyboardButton::setCallbackGame(const QJsonValue &callback_game) {
    m_callback_game = callback_game;
    m_callback_game_isSet = true;
}

bool OAIInlineKeyboardButton::is_callback_game_Set() const{
    return m_callback_game_isSet;
}

bool OAIInlineKeyboardButton::is_callback_game_Valid() const{
    return m_callback_game_isValid;
}

bool OAIInlineKeyboardButton::isPay() const {
    return m_pay;
}
void OAIInlineKeyboardButton::setPay(const bool &pay) {
    m_pay = pay;
    m_pay_isSet = true;
}

bool OAIInlineKeyboardButton::is_pay_Set() const{
    return m_pay_isSet;
}

bool OAIInlineKeyboardButton::is_pay_Valid() const{
    return m_pay_isValid;
}

bool OAIInlineKeyboardButton::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_text_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_callback_data_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_web_app.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_login_url.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_switch_inline_query_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_switch_inline_query_current_chat_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_switch_inline_query_chosen_chat.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_copy_text.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_callback_game_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pay_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIInlineKeyboardButton::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_text_isValid && true;
}

} // namespace tele_rest
