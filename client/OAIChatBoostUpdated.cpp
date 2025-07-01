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

#include "OAIChatBoostUpdated.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIChatBoostUpdated::OAIChatBoostUpdated(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIChatBoostUpdated::OAIChatBoostUpdated() {
    this->initializeModel();
}

OAIChatBoostUpdated::~OAIChatBoostUpdated() {}

void OAIChatBoostUpdated::initializeModel() {

    m_chat_isSet = false;
    m_chat_isValid = false;

    m_boost_isSet = false;
    m_boost_isValid = false;
}

void OAIChatBoostUpdated::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIChatBoostUpdated::fromJsonObject(QJsonObject json) {

    m_chat_isValid = ::tele_rest::fromJsonValue(m_chat, json[QString("chat")]);
    m_chat_isSet = !json[QString("chat")].isNull() && m_chat_isValid;

    m_boost_isValid = ::tele_rest::fromJsonValue(m_boost, json[QString("boost")]);
    m_boost_isSet = !json[QString("boost")].isNull() && m_boost_isValid;
}

QString OAIChatBoostUpdated::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIChatBoostUpdated::asJsonObject() const {
    QJsonObject obj;
    if (m_chat.isSet()) {
        obj.insert(QString("chat"), ::tele_rest::toJsonValue(m_chat));
    }
    if (m_boost.isSet()) {
        obj.insert(QString("boost"), ::tele_rest::toJsonValue(m_boost));
    }
    return obj;
}

OAIChat OAIChatBoostUpdated::getChat() const {
    return m_chat;
}
void OAIChatBoostUpdated::setChat(const OAIChat &chat) {
    m_chat = chat;
    m_chat_isSet = true;
}

bool OAIChatBoostUpdated::is_chat_Set() const{
    return m_chat_isSet;
}

bool OAIChatBoostUpdated::is_chat_Valid() const{
    return m_chat_isValid;
}

OAIChatBoost OAIChatBoostUpdated::getBoost() const {
    return m_boost;
}
void OAIChatBoostUpdated::setBoost(const OAIChatBoost &boost) {
    m_boost = boost;
    m_boost_isSet = true;
}

bool OAIChatBoostUpdated::is_boost_Set() const{
    return m_boost_isSet;
}

bool OAIChatBoostUpdated::is_boost_Valid() const{
    return m_boost_isValid;
}

bool OAIChatBoostUpdated::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_chat.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_boost.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIChatBoostUpdated::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_chat_isValid && m_boost_isValid && true;
}

} // namespace tele_rest
