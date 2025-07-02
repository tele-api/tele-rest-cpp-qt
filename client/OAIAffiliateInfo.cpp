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

#include "OAIAffiliateInfo.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIAffiliateInfo::OAIAffiliateInfo(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAffiliateInfo::OAIAffiliateInfo() {
    this->initializeModel();
}

OAIAffiliateInfo::~OAIAffiliateInfo() {}

void OAIAffiliateInfo::initializeModel() {

    m_commission_per_mille_isSet = false;
    m_commission_per_mille_isValid = false;

    m_amount_isSet = false;
    m_amount_isValid = false;

    m_affiliate_user_isSet = false;
    m_affiliate_user_isValid = false;

    m_affiliate_chat_isSet = false;
    m_affiliate_chat_isValid = false;

    m_nanostar_amount_isSet = false;
    m_nanostar_amount_isValid = false;
}

void OAIAffiliateInfo::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAffiliateInfo::fromJsonObject(QJsonObject json) {

    m_commission_per_mille_isValid = ::tele_rest::fromJsonValue(m_commission_per_mille, json[QString("commission_per_mille")]);
    m_commission_per_mille_isSet = !json[QString("commission_per_mille")].isNull() && m_commission_per_mille_isValid;

    m_amount_isValid = ::tele_rest::fromJsonValue(m_amount, json[QString("amount")]);
    m_amount_isSet = !json[QString("amount")].isNull() && m_amount_isValid;

    m_affiliate_user_isValid = ::tele_rest::fromJsonValue(m_affiliate_user, json[QString("affiliate_user")]);
    m_affiliate_user_isSet = !json[QString("affiliate_user")].isNull() && m_affiliate_user_isValid;

    m_affiliate_chat_isValid = ::tele_rest::fromJsonValue(m_affiliate_chat, json[QString("affiliate_chat")]);
    m_affiliate_chat_isSet = !json[QString("affiliate_chat")].isNull() && m_affiliate_chat_isValid;

    m_nanostar_amount_isValid = ::tele_rest::fromJsonValue(m_nanostar_amount, json[QString("nanostar_amount")]);
    m_nanostar_amount_isSet = !json[QString("nanostar_amount")].isNull() && m_nanostar_amount_isValid;
}

QString OAIAffiliateInfo::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAffiliateInfo::asJsonObject() const {
    QJsonObject obj;
    if (m_commission_per_mille_isSet) {
        obj.insert(QString("commission_per_mille"), ::tele_rest::toJsonValue(m_commission_per_mille));
    }
    if (m_amount_isSet) {
        obj.insert(QString("amount"), ::tele_rest::toJsonValue(m_amount));
    }
    if (m_affiliate_user.isSet()) {
        obj.insert(QString("affiliate_user"), ::tele_rest::toJsonValue(m_affiliate_user));
    }
    if (m_affiliate_chat.isSet()) {
        obj.insert(QString("affiliate_chat"), ::tele_rest::toJsonValue(m_affiliate_chat));
    }
    if (m_nanostar_amount_isSet) {
        obj.insert(QString("nanostar_amount"), ::tele_rest::toJsonValue(m_nanostar_amount));
    }
    return obj;
}

qint32 OAIAffiliateInfo::getCommissionPerMille() const {
    return m_commission_per_mille;
}
void OAIAffiliateInfo::setCommissionPerMille(const qint32 &commission_per_mille) {
    m_commission_per_mille = commission_per_mille;
    m_commission_per_mille_isSet = true;
}

bool OAIAffiliateInfo::is_commission_per_mille_Set() const{
    return m_commission_per_mille_isSet;
}

bool OAIAffiliateInfo::is_commission_per_mille_Valid() const{
    return m_commission_per_mille_isValid;
}

qint32 OAIAffiliateInfo::getAmount() const {
    return m_amount;
}
void OAIAffiliateInfo::setAmount(const qint32 &amount) {
    m_amount = amount;
    m_amount_isSet = true;
}

bool OAIAffiliateInfo::is_amount_Set() const{
    return m_amount_isSet;
}

bool OAIAffiliateInfo::is_amount_Valid() const{
    return m_amount_isValid;
}

OAIUser OAIAffiliateInfo::getAffiliateUser() const {
    return m_affiliate_user;
}
void OAIAffiliateInfo::setAffiliateUser(const OAIUser &affiliate_user) {
    m_affiliate_user = affiliate_user;
    m_affiliate_user_isSet = true;
}

bool OAIAffiliateInfo::is_affiliate_user_Set() const{
    return m_affiliate_user_isSet;
}

bool OAIAffiliateInfo::is_affiliate_user_Valid() const{
    return m_affiliate_user_isValid;
}

OAIChat OAIAffiliateInfo::getAffiliateChat() const {
    return m_affiliate_chat;
}
void OAIAffiliateInfo::setAffiliateChat(const OAIChat &affiliate_chat) {
    m_affiliate_chat = affiliate_chat;
    m_affiliate_chat_isSet = true;
}

bool OAIAffiliateInfo::is_affiliate_chat_Set() const{
    return m_affiliate_chat_isSet;
}

bool OAIAffiliateInfo::is_affiliate_chat_Valid() const{
    return m_affiliate_chat_isValid;
}

qint32 OAIAffiliateInfo::getNanostarAmount() const {
    return m_nanostar_amount;
}
void OAIAffiliateInfo::setNanostarAmount(const qint32 &nanostar_amount) {
    m_nanostar_amount = nanostar_amount;
    m_nanostar_amount_isSet = true;
}

bool OAIAffiliateInfo::is_nanostar_amount_Set() const{
    return m_nanostar_amount_isSet;
}

bool OAIAffiliateInfo::is_nanostar_amount_Valid() const{
    return m_nanostar_amount_isValid;
}

bool OAIAffiliateInfo::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_commission_per_mille_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_amount_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_affiliate_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_affiliate_chat.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_nanostar_amount_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAffiliateInfo::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_commission_per_mille_isValid && m_amount_isValid && true;
}

} // namespace tele_rest
