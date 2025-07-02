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

#include "OAISendGiftRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAISendGiftRequest::OAISendGiftRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISendGiftRequest::OAISendGiftRequest() {
    this->initializeModel();
}

OAISendGiftRequest::~OAISendGiftRequest() {}

void OAISendGiftRequest::initializeModel() {

    m_gift_id_isSet = false;
    m_gift_id_isValid = false;

    m_user_id_isSet = false;
    m_user_id_isValid = false;

    m_chat_id_isSet = false;
    m_chat_id_isValid = false;

    m_pay_for_upgrade_isSet = false;
    m_pay_for_upgrade_isValid = false;

    m_text_isSet = false;
    m_text_isValid = false;

    m_text_parse_mode_isSet = false;
    m_text_parse_mode_isValid = false;

    m_text_entities_isSet = false;
    m_text_entities_isValid = false;
}

void OAISendGiftRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISendGiftRequest::fromJsonObject(QJsonObject json) {

    m_gift_id_isValid = ::tele_rest::fromJsonValue(m_gift_id, json[QString("gift_id")]);
    m_gift_id_isSet = !json[QString("gift_id")].isNull() && m_gift_id_isValid;

    m_user_id_isValid = ::tele_rest::fromJsonValue(m_user_id, json[QString("user_id")]);
    m_user_id_isSet = !json[QString("user_id")].isNull() && m_user_id_isValid;

    m_chat_id_isValid = ::tele_rest::fromJsonValue(m_chat_id, json[QString("chat_id")]);
    m_chat_id_isSet = !json[QString("chat_id")].isNull() && m_chat_id_isValid;

    m_pay_for_upgrade_isValid = ::tele_rest::fromJsonValue(m_pay_for_upgrade, json[QString("pay_for_upgrade")]);
    m_pay_for_upgrade_isSet = !json[QString("pay_for_upgrade")].isNull() && m_pay_for_upgrade_isValid;

    m_text_isValid = ::tele_rest::fromJsonValue(m_text, json[QString("text")]);
    m_text_isSet = !json[QString("text")].isNull() && m_text_isValid;

    m_text_parse_mode_isValid = ::tele_rest::fromJsonValue(m_text_parse_mode, json[QString("text_parse_mode")]);
    m_text_parse_mode_isSet = !json[QString("text_parse_mode")].isNull() && m_text_parse_mode_isValid;

    m_text_entities_isValid = ::tele_rest::fromJsonValue(m_text_entities, json[QString("text_entities")]);
    m_text_entities_isSet = !json[QString("text_entities")].isNull() && m_text_entities_isValid;
}

QString OAISendGiftRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISendGiftRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_gift_id_isSet) {
        obj.insert(QString("gift_id"), ::tele_rest::toJsonValue(m_gift_id));
    }
    if (m_user_id_isSet) {
        obj.insert(QString("user_id"), ::tele_rest::toJsonValue(m_user_id));
    }
    if (m_chat_id.isSet()) {
        obj.insert(QString("chat_id"), ::tele_rest::toJsonValue(m_chat_id));
    }
    if (m_pay_for_upgrade_isSet) {
        obj.insert(QString("pay_for_upgrade"), ::tele_rest::toJsonValue(m_pay_for_upgrade));
    }
    if (m_text_isSet) {
        obj.insert(QString("text"), ::tele_rest::toJsonValue(m_text));
    }
    if (m_text_parse_mode_isSet) {
        obj.insert(QString("text_parse_mode"), ::tele_rest::toJsonValue(m_text_parse_mode));
    }
    if (m_text_entities.size() > 0) {
        obj.insert(QString("text_entities"), ::tele_rest::toJsonValue(m_text_entities));
    }
    return obj;
}

QString OAISendGiftRequest::getGiftId() const {
    return m_gift_id;
}
void OAISendGiftRequest::setGiftId(const QString &gift_id) {
    m_gift_id = gift_id;
    m_gift_id_isSet = true;
}

bool OAISendGiftRequest::is_gift_id_Set() const{
    return m_gift_id_isSet;
}

bool OAISendGiftRequest::is_gift_id_Valid() const{
    return m_gift_id_isValid;
}

qint32 OAISendGiftRequest::getUserId() const {
    return m_user_id;
}
void OAISendGiftRequest::setUserId(const qint32 &user_id) {
    m_user_id = user_id;
    m_user_id_isSet = true;
}

bool OAISendGiftRequest::is_user_id_Set() const{
    return m_user_id_isSet;
}

bool OAISendGiftRequest::is_user_id_Valid() const{
    return m_user_id_isValid;
}

OAISendGiftRequest_chat_id OAISendGiftRequest::getChatId() const {
    return m_chat_id;
}
void OAISendGiftRequest::setChatId(const OAISendGiftRequest_chat_id &chat_id) {
    m_chat_id = chat_id;
    m_chat_id_isSet = true;
}

bool OAISendGiftRequest::is_chat_id_Set() const{
    return m_chat_id_isSet;
}

bool OAISendGiftRequest::is_chat_id_Valid() const{
    return m_chat_id_isValid;
}

bool OAISendGiftRequest::isPayForUpgrade() const {
    return m_pay_for_upgrade;
}
void OAISendGiftRequest::setPayForUpgrade(const bool &pay_for_upgrade) {
    m_pay_for_upgrade = pay_for_upgrade;
    m_pay_for_upgrade_isSet = true;
}

bool OAISendGiftRequest::is_pay_for_upgrade_Set() const{
    return m_pay_for_upgrade_isSet;
}

bool OAISendGiftRequest::is_pay_for_upgrade_Valid() const{
    return m_pay_for_upgrade_isValid;
}

QString OAISendGiftRequest::getText() const {
    return m_text;
}
void OAISendGiftRequest::setText(const QString &text) {
    m_text = text;
    m_text_isSet = true;
}

bool OAISendGiftRequest::is_text_Set() const{
    return m_text_isSet;
}

bool OAISendGiftRequest::is_text_Valid() const{
    return m_text_isValid;
}

QString OAISendGiftRequest::getTextParseMode() const {
    return m_text_parse_mode;
}
void OAISendGiftRequest::setTextParseMode(const QString &text_parse_mode) {
    m_text_parse_mode = text_parse_mode;
    m_text_parse_mode_isSet = true;
}

bool OAISendGiftRequest::is_text_parse_mode_Set() const{
    return m_text_parse_mode_isSet;
}

bool OAISendGiftRequest::is_text_parse_mode_Valid() const{
    return m_text_parse_mode_isValid;
}

QList<OAIMessageEntity> OAISendGiftRequest::getTextEntities() const {
    return m_text_entities;
}
void OAISendGiftRequest::setTextEntities(const QList<OAIMessageEntity> &text_entities) {
    m_text_entities = text_entities;
    m_text_entities_isSet = true;
}

bool OAISendGiftRequest::is_text_entities_Set() const{
    return m_text_entities_isSet;
}

bool OAISendGiftRequest::is_text_entities_Valid() const{
    return m_text_entities_isValid;
}

bool OAISendGiftRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_gift_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_chat_id.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_pay_for_upgrade_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_text_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_text_parse_mode_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_text_entities.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISendGiftRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_gift_id_isValid && true;
}

} // namespace tele_rest
