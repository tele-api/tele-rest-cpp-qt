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

#include "OAIChatJoinRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIChatJoinRequest::OAIChatJoinRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIChatJoinRequest::OAIChatJoinRequest() {
    this->initializeModel();
}

OAIChatJoinRequest::~OAIChatJoinRequest() {}

void OAIChatJoinRequest::initializeModel() {

    m_chat_isSet = false;
    m_chat_isValid = false;

    m_from_isSet = false;
    m_from_isValid = false;

    m_user_chat_id_isSet = false;
    m_user_chat_id_isValid = false;

    m_date_isSet = false;
    m_date_isValid = false;

    m_bio_isSet = false;
    m_bio_isValid = false;

    m_invite_link_isSet = false;
    m_invite_link_isValid = false;
}

void OAIChatJoinRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIChatJoinRequest::fromJsonObject(QJsonObject json) {

    m_chat_isValid = ::tele_rest::fromJsonValue(m_chat, json[QString("chat")]);
    m_chat_isSet = !json[QString("chat")].isNull() && m_chat_isValid;

    m_from_isValid = ::tele_rest::fromJsonValue(m_from, json[QString("from")]);
    m_from_isSet = !json[QString("from")].isNull() && m_from_isValid;

    m_user_chat_id_isValid = ::tele_rest::fromJsonValue(m_user_chat_id, json[QString("user_chat_id")]);
    m_user_chat_id_isSet = !json[QString("user_chat_id")].isNull() && m_user_chat_id_isValid;

    m_date_isValid = ::tele_rest::fromJsonValue(m_date, json[QString("date")]);
    m_date_isSet = !json[QString("date")].isNull() && m_date_isValid;

    m_bio_isValid = ::tele_rest::fromJsonValue(m_bio, json[QString("bio")]);
    m_bio_isSet = !json[QString("bio")].isNull() && m_bio_isValid;

    m_invite_link_isValid = ::tele_rest::fromJsonValue(m_invite_link, json[QString("invite_link")]);
    m_invite_link_isSet = !json[QString("invite_link")].isNull() && m_invite_link_isValid;
}

QString OAIChatJoinRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIChatJoinRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_chat.isSet()) {
        obj.insert(QString("chat"), ::tele_rest::toJsonValue(m_chat));
    }
    if (m_from.isSet()) {
        obj.insert(QString("from"), ::tele_rest::toJsonValue(m_from));
    }
    if (m_user_chat_id_isSet) {
        obj.insert(QString("user_chat_id"), ::tele_rest::toJsonValue(m_user_chat_id));
    }
    if (m_date_isSet) {
        obj.insert(QString("date"), ::tele_rest::toJsonValue(m_date));
    }
    if (m_bio_isSet) {
        obj.insert(QString("bio"), ::tele_rest::toJsonValue(m_bio));
    }
    if (m_invite_link.isSet()) {
        obj.insert(QString("invite_link"), ::tele_rest::toJsonValue(m_invite_link));
    }
    return obj;
}

OAIChat OAIChatJoinRequest::getChat() const {
    return m_chat;
}
void OAIChatJoinRequest::setChat(const OAIChat &chat) {
    m_chat = chat;
    m_chat_isSet = true;
}

bool OAIChatJoinRequest::is_chat_Set() const{
    return m_chat_isSet;
}

bool OAIChatJoinRequest::is_chat_Valid() const{
    return m_chat_isValid;
}

OAIUser OAIChatJoinRequest::getFrom() const {
    return m_from;
}
void OAIChatJoinRequest::setFrom(const OAIUser &from) {
    m_from = from;
    m_from_isSet = true;
}

bool OAIChatJoinRequest::is_from_Set() const{
    return m_from_isSet;
}

bool OAIChatJoinRequest::is_from_Valid() const{
    return m_from_isValid;
}

qint32 OAIChatJoinRequest::getUserChatId() const {
    return m_user_chat_id;
}
void OAIChatJoinRequest::setUserChatId(const qint32 &user_chat_id) {
    m_user_chat_id = user_chat_id;
    m_user_chat_id_isSet = true;
}

bool OAIChatJoinRequest::is_user_chat_id_Set() const{
    return m_user_chat_id_isSet;
}

bool OAIChatJoinRequest::is_user_chat_id_Valid() const{
    return m_user_chat_id_isValid;
}

qint32 OAIChatJoinRequest::getDate() const {
    return m_date;
}
void OAIChatJoinRequest::setDate(const qint32 &date) {
    m_date = date;
    m_date_isSet = true;
}

bool OAIChatJoinRequest::is_date_Set() const{
    return m_date_isSet;
}

bool OAIChatJoinRequest::is_date_Valid() const{
    return m_date_isValid;
}

QString OAIChatJoinRequest::getBio() const {
    return m_bio;
}
void OAIChatJoinRequest::setBio(const QString &bio) {
    m_bio = bio;
    m_bio_isSet = true;
}

bool OAIChatJoinRequest::is_bio_Set() const{
    return m_bio_isSet;
}

bool OAIChatJoinRequest::is_bio_Valid() const{
    return m_bio_isValid;
}

OAIChatInviteLink OAIChatJoinRequest::getInviteLink() const {
    return m_invite_link;
}
void OAIChatJoinRequest::setInviteLink(const OAIChatInviteLink &invite_link) {
    m_invite_link = invite_link;
    m_invite_link_isSet = true;
}

bool OAIChatJoinRequest::is_invite_link_Set() const{
    return m_invite_link_isSet;
}

bool OAIChatJoinRequest::is_invite_link_Valid() const{
    return m_invite_link_isValid;
}

bool OAIChatJoinRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_chat.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_from.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_chat_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_bio_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_invite_link.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIChatJoinRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_chat_isValid && m_from_isValid && m_user_chat_id_isValid && m_date_isValid && true;
}

} // namespace tele_rest
