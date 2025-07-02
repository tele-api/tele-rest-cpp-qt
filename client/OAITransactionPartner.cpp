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

#include "OAITransactionPartner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAITransactionPartner::OAITransactionPartner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITransactionPartner::OAITransactionPartner() {
    this->initializeModel();
}

OAITransactionPartner::~OAITransactionPartner() {}

void OAITransactionPartner::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_transaction_type_isSet = false;
    m_transaction_type_isValid = false;

    m_user_isSet = false;
    m_user_isValid = false;

    m_chat_isSet = false;
    m_chat_isValid = false;

    m_commission_per_mille_isSet = false;
    m_commission_per_mille_isValid = false;

    m_request_count_isSet = false;
    m_request_count_isValid = false;

    m_affiliate_isSet = false;
    m_affiliate_isValid = false;

    m_invoice_payload_isSet = false;
    m_invoice_payload_isValid = false;

    m_subscription_period_isSet = false;
    m_subscription_period_isValid = false;

    m_paid_media_isSet = false;
    m_paid_media_isValid = false;

    m_paid_media_payload_isSet = false;
    m_paid_media_payload_isValid = false;

    m_gift_isSet = false;
    m_gift_isValid = false;

    m_premium_subscription_duration_isSet = false;
    m_premium_subscription_duration_isValid = false;

    m_sponsor_user_isSet = false;
    m_sponsor_user_isValid = false;

    m_withdrawal_state_isSet = false;
    m_withdrawal_state_isValid = false;
}

void OAITransactionPartner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAITransactionPartner::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_transaction_type_isValid = ::tele_rest::fromJsonValue(m_transaction_type, json[QString("transaction_type")]);
    m_transaction_type_isSet = !json[QString("transaction_type")].isNull() && m_transaction_type_isValid;

    m_user_isValid = ::tele_rest::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;

    m_chat_isValid = ::tele_rest::fromJsonValue(m_chat, json[QString("chat")]);
    m_chat_isSet = !json[QString("chat")].isNull() && m_chat_isValid;

    m_commission_per_mille_isValid = ::tele_rest::fromJsonValue(m_commission_per_mille, json[QString("commission_per_mille")]);
    m_commission_per_mille_isSet = !json[QString("commission_per_mille")].isNull() && m_commission_per_mille_isValid;

    m_request_count_isValid = ::tele_rest::fromJsonValue(m_request_count, json[QString("request_count")]);
    m_request_count_isSet = !json[QString("request_count")].isNull() && m_request_count_isValid;

    m_affiliate_isValid = ::tele_rest::fromJsonValue(m_affiliate, json[QString("affiliate")]);
    m_affiliate_isSet = !json[QString("affiliate")].isNull() && m_affiliate_isValid;

    m_invoice_payload_isValid = ::tele_rest::fromJsonValue(m_invoice_payload, json[QString("invoice_payload")]);
    m_invoice_payload_isSet = !json[QString("invoice_payload")].isNull() && m_invoice_payload_isValid;

    m_subscription_period_isValid = ::tele_rest::fromJsonValue(m_subscription_period, json[QString("subscription_period")]);
    m_subscription_period_isSet = !json[QString("subscription_period")].isNull() && m_subscription_period_isValid;

    m_paid_media_isValid = ::tele_rest::fromJsonValue(m_paid_media, json[QString("paid_media")]);
    m_paid_media_isSet = !json[QString("paid_media")].isNull() && m_paid_media_isValid;

    m_paid_media_payload_isValid = ::tele_rest::fromJsonValue(m_paid_media_payload, json[QString("paid_media_payload")]);
    m_paid_media_payload_isSet = !json[QString("paid_media_payload")].isNull() && m_paid_media_payload_isValid;

    m_gift_isValid = ::tele_rest::fromJsonValue(m_gift, json[QString("gift")]);
    m_gift_isSet = !json[QString("gift")].isNull() && m_gift_isValid;

    m_premium_subscription_duration_isValid = ::tele_rest::fromJsonValue(m_premium_subscription_duration, json[QString("premium_subscription_duration")]);
    m_premium_subscription_duration_isSet = !json[QString("premium_subscription_duration")].isNull() && m_premium_subscription_duration_isValid;

    m_sponsor_user_isValid = ::tele_rest::fromJsonValue(m_sponsor_user, json[QString("sponsor_user")]);
    m_sponsor_user_isSet = !json[QString("sponsor_user")].isNull() && m_sponsor_user_isValid;

    m_withdrawal_state_isValid = ::tele_rest::fromJsonValue(m_withdrawal_state, json[QString("withdrawal_state")]);
    m_withdrawal_state_isSet = !json[QString("withdrawal_state")].isNull() && m_withdrawal_state_isValid;
}

QString OAITransactionPartner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAITransactionPartner::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_transaction_type_isSet) {
        obj.insert(QString("transaction_type"), ::tele_rest::toJsonValue(m_transaction_type));
    }
    if (m_user.isSet()) {
        obj.insert(QString("user"), ::tele_rest::toJsonValue(m_user));
    }
    if (m_chat.isSet()) {
        obj.insert(QString("chat"), ::tele_rest::toJsonValue(m_chat));
    }
    if (m_commission_per_mille_isSet) {
        obj.insert(QString("commission_per_mille"), ::tele_rest::toJsonValue(m_commission_per_mille));
    }
    if (m_request_count_isSet) {
        obj.insert(QString("request_count"), ::tele_rest::toJsonValue(m_request_count));
    }
    if (m_affiliate.isSet()) {
        obj.insert(QString("affiliate"), ::tele_rest::toJsonValue(m_affiliate));
    }
    if (m_invoice_payload_isSet) {
        obj.insert(QString("invoice_payload"), ::tele_rest::toJsonValue(m_invoice_payload));
    }
    if (m_subscription_period_isSet) {
        obj.insert(QString("subscription_period"), ::tele_rest::toJsonValue(m_subscription_period));
    }
    if (m_paid_media.size() > 0) {
        obj.insert(QString("paid_media"), ::tele_rest::toJsonValue(m_paid_media));
    }
    if (m_paid_media_payload_isSet) {
        obj.insert(QString("paid_media_payload"), ::tele_rest::toJsonValue(m_paid_media_payload));
    }
    if (m_gift.isSet()) {
        obj.insert(QString("gift"), ::tele_rest::toJsonValue(m_gift));
    }
    if (m_premium_subscription_duration_isSet) {
        obj.insert(QString("premium_subscription_duration"), ::tele_rest::toJsonValue(m_premium_subscription_duration));
    }
    if (m_sponsor_user.isSet()) {
        obj.insert(QString("sponsor_user"), ::tele_rest::toJsonValue(m_sponsor_user));
    }
    if (m_withdrawal_state.isSet()) {
        obj.insert(QString("withdrawal_state"), ::tele_rest::toJsonValue(m_withdrawal_state));
    }
    return obj;
}

QString OAITransactionPartner::getType() const {
    return m_type;
}
void OAITransactionPartner::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAITransactionPartner::is_type_Set() const{
    return m_type_isSet;
}

bool OAITransactionPartner::is_type_Valid() const{
    return m_type_isValid;
}

QString OAITransactionPartner::getTransactionType() const {
    return m_transaction_type;
}
void OAITransactionPartner::setTransactionType(const QString &transaction_type) {
    m_transaction_type = transaction_type;
    m_transaction_type_isSet = true;
}

bool OAITransactionPartner::is_transaction_type_Set() const{
    return m_transaction_type_isSet;
}

bool OAITransactionPartner::is_transaction_type_Valid() const{
    return m_transaction_type_isValid;
}

OAIUser OAITransactionPartner::getUser() const {
    return m_user;
}
void OAITransactionPartner::setUser(const OAIUser &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAITransactionPartner::is_user_Set() const{
    return m_user_isSet;
}

bool OAITransactionPartner::is_user_Valid() const{
    return m_user_isValid;
}

OAIChat OAITransactionPartner::getChat() const {
    return m_chat;
}
void OAITransactionPartner::setChat(const OAIChat &chat) {
    m_chat = chat;
    m_chat_isSet = true;
}

bool OAITransactionPartner::is_chat_Set() const{
    return m_chat_isSet;
}

bool OAITransactionPartner::is_chat_Valid() const{
    return m_chat_isValid;
}

qint32 OAITransactionPartner::getCommissionPerMille() const {
    return m_commission_per_mille;
}
void OAITransactionPartner::setCommissionPerMille(const qint32 &commission_per_mille) {
    m_commission_per_mille = commission_per_mille;
    m_commission_per_mille_isSet = true;
}

bool OAITransactionPartner::is_commission_per_mille_Set() const{
    return m_commission_per_mille_isSet;
}

bool OAITransactionPartner::is_commission_per_mille_Valid() const{
    return m_commission_per_mille_isValid;
}

qint32 OAITransactionPartner::getRequestCount() const {
    return m_request_count;
}
void OAITransactionPartner::setRequestCount(const qint32 &request_count) {
    m_request_count = request_count;
    m_request_count_isSet = true;
}

bool OAITransactionPartner::is_request_count_Set() const{
    return m_request_count_isSet;
}

bool OAITransactionPartner::is_request_count_Valid() const{
    return m_request_count_isValid;
}

OAIAffiliateInfo OAITransactionPartner::getAffiliate() const {
    return m_affiliate;
}
void OAITransactionPartner::setAffiliate(const OAIAffiliateInfo &affiliate) {
    m_affiliate = affiliate;
    m_affiliate_isSet = true;
}

bool OAITransactionPartner::is_affiliate_Set() const{
    return m_affiliate_isSet;
}

bool OAITransactionPartner::is_affiliate_Valid() const{
    return m_affiliate_isValid;
}

QString OAITransactionPartner::getInvoicePayload() const {
    return m_invoice_payload;
}
void OAITransactionPartner::setInvoicePayload(const QString &invoice_payload) {
    m_invoice_payload = invoice_payload;
    m_invoice_payload_isSet = true;
}

bool OAITransactionPartner::is_invoice_payload_Set() const{
    return m_invoice_payload_isSet;
}

bool OAITransactionPartner::is_invoice_payload_Valid() const{
    return m_invoice_payload_isValid;
}

qint32 OAITransactionPartner::getSubscriptionPeriod() const {
    return m_subscription_period;
}
void OAITransactionPartner::setSubscriptionPeriod(const qint32 &subscription_period) {
    m_subscription_period = subscription_period;
    m_subscription_period_isSet = true;
}

bool OAITransactionPartner::is_subscription_period_Set() const{
    return m_subscription_period_isSet;
}

bool OAITransactionPartner::is_subscription_period_Valid() const{
    return m_subscription_period_isValid;
}

QList<OAIPaidMedia> OAITransactionPartner::getPaidMedia() const {
    return m_paid_media;
}
void OAITransactionPartner::setPaidMedia(const QList<OAIPaidMedia> &paid_media) {
    m_paid_media = paid_media;
    m_paid_media_isSet = true;
}

bool OAITransactionPartner::is_paid_media_Set() const{
    return m_paid_media_isSet;
}

bool OAITransactionPartner::is_paid_media_Valid() const{
    return m_paid_media_isValid;
}

QString OAITransactionPartner::getPaidMediaPayload() const {
    return m_paid_media_payload;
}
void OAITransactionPartner::setPaidMediaPayload(const QString &paid_media_payload) {
    m_paid_media_payload = paid_media_payload;
    m_paid_media_payload_isSet = true;
}

bool OAITransactionPartner::is_paid_media_payload_Set() const{
    return m_paid_media_payload_isSet;
}

bool OAITransactionPartner::is_paid_media_payload_Valid() const{
    return m_paid_media_payload_isValid;
}

OAIGift OAITransactionPartner::getGift() const {
    return m_gift;
}
void OAITransactionPartner::setGift(const OAIGift &gift) {
    m_gift = gift;
    m_gift_isSet = true;
}

bool OAITransactionPartner::is_gift_Set() const{
    return m_gift_isSet;
}

bool OAITransactionPartner::is_gift_Valid() const{
    return m_gift_isValid;
}

qint32 OAITransactionPartner::getPremiumSubscriptionDuration() const {
    return m_premium_subscription_duration;
}
void OAITransactionPartner::setPremiumSubscriptionDuration(const qint32 &premium_subscription_duration) {
    m_premium_subscription_duration = premium_subscription_duration;
    m_premium_subscription_duration_isSet = true;
}

bool OAITransactionPartner::is_premium_subscription_duration_Set() const{
    return m_premium_subscription_duration_isSet;
}

bool OAITransactionPartner::is_premium_subscription_duration_Valid() const{
    return m_premium_subscription_duration_isValid;
}

OAIUser OAITransactionPartner::getSponsorUser() const {
    return m_sponsor_user;
}
void OAITransactionPartner::setSponsorUser(const OAIUser &sponsor_user) {
    m_sponsor_user = sponsor_user;
    m_sponsor_user_isSet = true;
}

bool OAITransactionPartner::is_sponsor_user_Set() const{
    return m_sponsor_user_isSet;
}

bool OAITransactionPartner::is_sponsor_user_Valid() const{
    return m_sponsor_user_isValid;
}

OAIRevenueWithdrawalState OAITransactionPartner::getWithdrawalState() const {
    return m_withdrawal_state;
}
void OAITransactionPartner::setWithdrawalState(const OAIRevenueWithdrawalState &withdrawal_state) {
    m_withdrawal_state = withdrawal_state;
    m_withdrawal_state_isSet = true;
}

bool OAITransactionPartner::is_withdrawal_state_Set() const{
    return m_withdrawal_state_isSet;
}

bool OAITransactionPartner::is_withdrawal_state_Valid() const{
    return m_withdrawal_state_isValid;
}

bool OAITransactionPartner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_transaction_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_chat.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_commission_per_mille_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_request_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_affiliate.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_invoice_payload_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_subscription_period_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_paid_media.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_paid_media_payload_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gift.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_premium_subscription_duration_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sponsor_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_withdrawal_state.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAITransactionPartner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_transaction_type_isValid && m_user_isValid && m_chat_isValid && m_commission_per_mille_isValid && m_request_count_isValid && true;
}

} // namespace tele_rest
